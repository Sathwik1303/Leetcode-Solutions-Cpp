class Solution {
public:
    bool isPerfectSquare(int num) {
        long long ans=0,i=1;
        while (ans<=num) {
            ans=i*i;
            if (ans==num)
                return true;
            i++;
        }
        return false;
    }
};