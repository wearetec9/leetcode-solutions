class Solution {
public:
    string frequencySort(string s) {
        std::unordered_map<char ,int> mp;
        for(char c : s){
            mp[c]++;
        }
        std::vector<pair<int,char>> v ;
        for(auto const& pairs : mp){
                v.push_back({pairs.second,pairs.first});
        } 
        string d = "";
         std::sort(v.begin(), v.end(), std::greater<std::pair<int, char>>());
        for(auto const& pairs : v){
            int freq = pairs.first;
            char ch = pairs.second;
            d.append(freq, ch); 
        }


        return d ; 
        

        
    }
};