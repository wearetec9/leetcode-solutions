#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.length();
        long long MOD = 1e9 + 7;

        // Arrays to store prefix metrics
        vector<long long> pref_val(n + 1, 0); // Stores the running combined number
        vector<long long> pref_sum(n + 1, 0); // Stores the running digit sum
        vector<int> pref_count(n + 1, 0);     // Tracks the number of non-zero digits seen

        // Precompute powers of 10 under modulo
        vector<long long> power10(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            power10[i] = (power10[i - 1] * 10) % MOD;
        }

        // Single pass prefix precomputation: O(N)
        for (int i = 0; i < n; ++i) {
            pref_val[i + 1] = pref_val[i];
            pref_sum[i + 1] = pref_sum[i];
            pref_count[i + 1] = pref_count[i];

            if (s[i] != '0') {
                int digit = s[i] - '0';
                pref_val[i + 1] = (pref_val[i] * 10 + digit) % MOD;
                pref_sum[i + 1] = (pref_sum[i] + digit) % MOD;
                pref_count[i + 1] = pref_count[i] + 1;
            }
        }

        vector<int> answer;
        answer.reserve(queries.size()); // Optimise memory allocation speeds

        // Process each query instantly: O(1) per query
        for (const auto& q : queries) {
            int L = q[0];
            int R = q[1];

            // 1. Calculate the active sum for this window
            long long current_sum = (pref_sum[R + 1] - pref_sum[L] + MOD) % MOD;

            // 2. Count how many non-zero digits exist in this segment
            int non_zero_count = pref_count[R + 1] - pref_count[L];

            // 3. Extract the mathematical substring value x in O(1)
            long long x = (pref_val[R + 1] - (pref_val[L] * power10[non_zero_count]) % MOD + MOD) % MOD;

            // 4. Combine and append the modulo output
            long long total = (x * current_sum) % MOD;
            answer.push_back(static_cast<int>(total));
        }

        return answer;
    }
};
