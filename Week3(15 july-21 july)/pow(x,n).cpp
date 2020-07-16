class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        double d=myPow(x,n/2);
        if(n%2==0) return d*d;
        else{
            if(n>0)
                return x*d*d;
            else
                return d*d/x;
        }
    }
};
