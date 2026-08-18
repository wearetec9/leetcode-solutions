class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        if (len < 1)
            return "";
        int maxlen = 0;
        int start = 0;
        for (int i = 0; i < s.length(); i++) {

            int left1 = i;
            int right1 = i;
            while (left1 >= 0 && right1 < len && s[left1] == s[right1]) {
                if (right1 - left1 + 1 > maxlen) {
                    maxlen = right1 - left1 + 1;
                    start = left1;
                }
                left1--;
                right1++;
            }

            int left2 = i;
            int right2 = i + 1;
            while (left2 >= 0 && right2 < len && s[left2] == s[right2]) {
                if (right2 - left2 + 1 > maxlen) {
                    maxlen = right2 - left2 + 1;
                    start = left2;
                }

                left2--;
                right2++;
            }
        }
        return s.substr(start, maxlen);
    }
};