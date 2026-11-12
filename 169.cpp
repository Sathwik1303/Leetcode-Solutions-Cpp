class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<long,long> seen;
        for (long i=0;i<nums.size();i++) {
            seen[nums[i]]++;
        }
        long bestval=INT_MIN,bestkey;
        for (auto &[key,value]:seen) {
            if (value>bestval) {
                bestval=value;
                bestkey=key;
            }
        }
        return bestkey;
    }
};