class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>sorted(nums);
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int>ans;
        for (int i=0;i<nums.size();i++) {
            if (ans.find(sorted[i])==ans.end())
                ans[sorted[i]]=i;
        }
        vector<int>result;
        for (int i=0;i<nums.size();i++){
            result.push_back(ans[nums[i]]);
        }
        return result;
    }
};