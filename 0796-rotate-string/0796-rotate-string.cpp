class Solution {
public:
    bool rotateString(string s, string goal) {
        int k =0 ; 
        while ( k < s.length()) {
            int left = 0;
            char first = s[left];
            for (int i = 1; i < s.length(); i++) {
                s[left] = s[i];
                left++;
            }
            s[s.length()-1] = first ; 
            k++;
            if(s == goal){
                return true ; 
            }
        }
    return false; 
    }
};