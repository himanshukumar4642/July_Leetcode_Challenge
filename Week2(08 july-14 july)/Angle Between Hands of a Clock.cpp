class Solution {
public:
    double angleClock(int h, int m) {
        double ha=(h*60+m)*0.5;
        double ma=m*6;
        double an=abs(ha-ma);
        return min(360-an,an);
    }
};
