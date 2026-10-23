class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long k=n;
        bool neg = false;
        if (k<0) {
            neg = true;
            k=-k;
        }
        while (k>0) {
            if (k & 1) ans*=x;
            x*=x;
            k>>=1;
        }
        if (neg) return 1/ans;
        return ans;
    }
};