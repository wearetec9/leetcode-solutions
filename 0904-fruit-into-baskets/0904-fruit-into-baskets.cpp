class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp ;
        int left = 0 ;  
        int len = 0 ; 
        for(int i = 0 ; i < fruits.size();i++){
            int cur = fruits[i];
            mp[cur]++;
            while(mp.size() > 2){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0 ){
                    mp.erase(fruits[left]);
                }
                left++; 
            }
            len = std::max(len , i - left + 1);
        }
        return len ; 
    }
};