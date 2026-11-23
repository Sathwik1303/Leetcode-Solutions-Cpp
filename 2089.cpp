class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int low=0,check=0; 
        for (auto it:nums) {
            if (it<target) low++;
            else if (it==target) check++;
        }
        vector<int> ans;
        for (int i=0;i<check;i++) {
            ans.push_back(low+i);
        }
        return ans;
    }
};