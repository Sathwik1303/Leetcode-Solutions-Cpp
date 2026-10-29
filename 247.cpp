class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>seen;
        int ans;
        for (auto i:nums) {
            if (seen.count(i)){
                ans=i;
                break;
            }
            seen.insert(i);
        }
        return ans;
    }
};