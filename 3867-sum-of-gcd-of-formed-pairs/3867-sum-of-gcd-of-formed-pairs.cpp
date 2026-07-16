class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        if (nums.empty()) return 0;
        std::vector<long long> prefixgcd ;
        
        long long mxi = nums[0] ; 
        for(long long i = 0 ; i < nums.size(); i++){
            mxi = std::max(mxi,(long long)nums[i]);
            long long curGcd = std::gcd((long long)nums[i], mxi);
            prefixgcd.push_back(curGcd);
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        int left = 0 ; 
        int right = prefixgcd.size()-1;
        long long sum = 0 ; 
        while (left < right){
           
            long long  gcdcur = std::gcd(prefixgcd[left], prefixgcd[right]);
            sum += gcdcur ; 
            left++;
            right--;
        }
        return sum ; 

    }
};