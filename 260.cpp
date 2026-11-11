class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> ans;
        vector<int> ret;
        for (int i=0;i<nums.size();i++) {
            ans[nums[i]]++;
        }
        for (auto &it:ans) {
            if (it.second==1)
                ret.push_back(it.first);
        }
        return ret;
    } 
};