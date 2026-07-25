class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tsum=0;
        for(int i=0;i<nums.size();i++){
           tsum+=nums[i];
        }
        int minsub=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=min(nums[i],sum+nums[i]);
            minsub=min(minsub,sum);
            
            }
        
        int ans1=tsum-minsub;
        int sum1=0;
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
          sum1=max(nums[i],sum1+nums[i]);
          maxsum=max(maxsum,sum1);
         
        }
       if(maxsum<0){
        return maxsum;
       } 
       return max(maxsum,ans1);
    }
};