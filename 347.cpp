class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        for (int i=0;i<nums.size();i++) {
            seen[nums[i]]++;
        }
        vector<int>ans;
        for (int i=1;i<=k;i++) {
            int bestval=INT_MIN,bestkey;
            for (auto &[key,value]:seen) {
                if (value>bestval) {
                    bestval=value;
                    bestkey=key;
                }
            }
            ans.push_back(bestkey);
            seen.erase(bestkey);
        }
        return ans;
    }
};