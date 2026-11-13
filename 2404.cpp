class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> seen;
        for (int i=0;i<nums.size();i++) {
            if (nums[i]%2==0) {
                seen[nums[i]]++;
            }
        }
        if (seen.empty())
            return -1;
        vector<int>ans;
        int bestval=INT_MIN;
        for (auto &[key,value]:seen) {
            if (value>bestval) {
                bestval=value;
            }
        }
        for (auto &[key,value]:seen) {
            if (value==bestval) {
                ans.push_back(key);
            }
        }
        return (*min_element(ans.begin(),ans.end()));
    }
};