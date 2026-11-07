class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> newl;
        for (int i=0;i<m;i++) {
            newl.push_back(nums1[i]);
        }
        for (int i=0;i<n;i++) {
            newl.push_back(nums2[i]);
        }
        sort(newl.begin(),newl.end());
        nums1=newl;
    }
};