class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) 
            return false;
        long long ans=x,sol;
        while (ans>0) {
            sol=sol*10 + ans%10;
            ans/=10;
        }      
        return sol==x;                  
    }
};