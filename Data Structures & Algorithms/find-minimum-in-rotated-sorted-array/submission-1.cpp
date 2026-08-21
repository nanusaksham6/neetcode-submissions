class Solution {
public:
    int findMin(vector<int> &nums) {
       int ans= INT_MAX;
       int n=nums.size();
       int low=0;
       int high=n-1; 
       while(low<=high){
        int  mid=low+(high-low)/2;
        if(nums[low]<=nums[mid]){
            ans=min(nums[low],ans);
            low=mid+1;
       }
        else if (nums[high]>nums[mid]){
            ans=min(nums[mid],ans);
            high=mid-1;
       }
       }
       return ans;
    }
};
