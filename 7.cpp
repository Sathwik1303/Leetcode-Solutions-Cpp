class Solution {
public:
    int reverse(int x) {
        int sign=1;
        long long ans=0,n=x;
        if (n<0) {
            sign=-1;
            n=n*-1;
        }
        while (n>0) {
            ans=ans*10+n%10;
            n/=10;
        }
        ans=ans*sign;
        if (ans > INT_MAX || ans < INT_MIN) return 0;
        return ans;
    }
};