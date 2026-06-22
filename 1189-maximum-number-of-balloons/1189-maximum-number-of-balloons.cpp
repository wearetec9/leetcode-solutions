class Solution {
public:
    int maxNumberOfBalloons(string text) {
        std::unordered_map<char, int> mp;
        std::string s = "balloon";
        for (char c : text) {
            if (c == 'b' || c == 'a' || c == 'l' || c == 'o' || c == 'n') mp[c]++;
        }
        if(mp.size() < 5)return 0;
        int bcount = mp['b'];
        int acount = mp['a'];
        int lcount = mp['l']/2;
        int ocount = mp['o']/2;
        int ncount = mp['n'];
        int minFreq = std::min({bcount,acount,lcount,ocount,ncount});
        return minFreq;
    }
};