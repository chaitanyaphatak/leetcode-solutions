class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hrdeg = ((hour%12)*30)+(0.5*minutes);
        double mindeg = minutes*6;
        double ans = abs(hrdeg-mindeg);
       
        return min(ans,360-ans);
    }
};