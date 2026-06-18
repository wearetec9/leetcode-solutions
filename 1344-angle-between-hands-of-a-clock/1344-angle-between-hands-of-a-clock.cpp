class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans = (30*hour) - (5.5*minutes);
        if(ans < 0){
            ans *= -1 ;
        }
        if(ans > 180){
            ans -= 360;
            if(ans < 0){
                ans *= -1 ;
            }
        }
        return ans;
    }
};