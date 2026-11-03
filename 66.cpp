class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        vector<int> liss;
        for (int i=digits.size()-1;i>=0;i--) {
            int sum=digits[i]+carry;
            liss.push_back(sum%10);
            carry=sum/10;
        }
        if (carry) liss.push_back(carry);
        reverse(liss.begin(),liss.end());
        return liss;
    }
};