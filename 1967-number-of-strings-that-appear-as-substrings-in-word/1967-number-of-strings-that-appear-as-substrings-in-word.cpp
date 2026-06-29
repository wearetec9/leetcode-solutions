class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        unordered_set<char> st(word.begin(), word.end());
        int n = 0;
        for(int i = 0 ; i < patterns.size(); i++){
            if(word.find(patterns[i]) != string::npos){
                n++;
            }
        }
        return n;
    }
};