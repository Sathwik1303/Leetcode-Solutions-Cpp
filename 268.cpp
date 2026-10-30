class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int>ans;
        for (int i=0;i<=nums.size();i++) {
            ans.insert(i);
        }
        for (int x : ans) {
            if (find(nums.begin(), nums.end(), x) == nums.end()) {
                return x;
            }
        }
        return -1;
    }
};