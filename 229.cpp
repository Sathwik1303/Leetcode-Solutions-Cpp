class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> seen;
        for (int x : nums) {
            seen[x]++;
        }
        int threshold = nums.size() / 3;
        vector<int> ans;
        for (auto& [key, value] : seen) {
            if (value > threshold) {
                ans.push_back(key);
            }
        }
        return ans;
    }
};