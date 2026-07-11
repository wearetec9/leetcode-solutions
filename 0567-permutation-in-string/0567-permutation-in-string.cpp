class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        bool state = false ; 
        unordered_map<char,int> mp ; 
        unordered_map<char,int> mp2 ; 
        for(int i : s1){
            mp[i]++;
        }
        int left = 0 ; 
        for(int i = 0 ; i < s2.length(); i++){
            char cur = s2[i];
            mp2[cur]++;
            while(i - left + 1 > s1.size()){
                mp2[s2[left]]--;
                if(mp2[s2[left]] == 0) mp2.erase(s2[left]); 
                left++;
            }
            if(mp == mp2){
                return true; 
            }
        }
        return false;
    }
};