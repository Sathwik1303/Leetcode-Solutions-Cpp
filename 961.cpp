class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>seen;
        for (int i=0;i<nums.size();i++) {
            seen[nums[i]]++;
        }
        for (auto &[key,value]:seen) {
            if (value>1) {
                return key;
            }
        }
        return 1;
    }
};