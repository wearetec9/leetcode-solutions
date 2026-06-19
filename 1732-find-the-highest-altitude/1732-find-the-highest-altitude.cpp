class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0 , mx =0 ;
        for(int x : gain){
            alt += x ;
            mx = std::max(alt , mx);
        }
        return mx;
    }
};