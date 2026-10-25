class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n==1 || n==4)
            return true;
        long long x=1;
        while (x<=n) {
            if (x==n)
                return true;
            x*=4;
        }
        return false;
    }
};