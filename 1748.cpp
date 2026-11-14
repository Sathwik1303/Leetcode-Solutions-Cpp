class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> seen;
        for (auto it:nums) {
            seen[it]++;
        }
        int sum=0;
        for (auto &[key,value]:seen) {
            if (value==1){
                sum+=key;
            }
        }
        return sum;
    }
};