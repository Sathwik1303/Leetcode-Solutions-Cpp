class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[0];
        for (int i=0;i<nums.size();i++) {
            if (nums[i]<ans)
                ans=nums[i];
        }
        return ans;
    }
};



class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while (left<right) {
            int mid=left + (right-left)/2;
            if (nums[mid]<=nums[right]) {
                right=mid;
            }
            else {
                left=mid+1;
            }
        }
        return nums[left];
    }
};
