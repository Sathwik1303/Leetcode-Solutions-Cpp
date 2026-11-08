class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        set<int>seen;
        for (int i=0;i<nums.size();i++) {
            if (seen.find(nums[i])!=seen.end())
                ans.push_back(nums[i]);
            seen.insert(nums[i]);
        }
        return ans;
    }
};