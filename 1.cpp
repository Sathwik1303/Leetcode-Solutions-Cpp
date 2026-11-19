class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sortt(nums);
        sort(sortt.begin(),sortt.end());
        int left=0;
        int right=nums.size()-1;
        unordered_map<int,vector<int>> ans;
        for (int i=0;i<nums.size();i++) ans[nums[i]].push_back(i);
        while (left<right) {
            int sum=sortt[left]+sortt[right];
            if (sum==target){
                int a=sortt[left],b=sortt[right];
                if (a==b) return {ans[a][0],ans[a][1]};                
                return {ans[a][0],ans[b][0]};
            }
            else if (sum>target) {
                right--;
            }
            else
                left++;
        }
        return {};
    }
};