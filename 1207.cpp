class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>seen;
        for (auto it:arr){
            seen[it]++;
        }
        unordered_set<int>count;
        for (auto &p:seen) {
            count.insert(p.second);
        }
        return (count.size()==seen.size());
    } 
};