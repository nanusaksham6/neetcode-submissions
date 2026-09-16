class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // put value in maps then target= mp[value]-current value return true for o(n^2) make two if (nums[i]+nums[j]==target)
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
         if(mp.find(complement)!=mp.end()){
            return {mp[complement] , i};
         }  
          mp[nums[i]]=i;
        }
        return {};
    }
};
