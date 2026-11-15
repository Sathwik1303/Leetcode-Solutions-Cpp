class Solution {
public:
    char findTheDifference(string s, string t) {
        long long sum=0,diff=0;
        for (auto it:t) {
            sum+=it -'a';
        }
        for (auto it:s) {
            diff+=it -'a';
        }
        return (sum-diff+'a');
    }
};