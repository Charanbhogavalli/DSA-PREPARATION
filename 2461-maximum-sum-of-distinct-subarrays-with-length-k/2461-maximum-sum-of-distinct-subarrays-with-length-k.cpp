class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxsum=0;
        long long sum=0;
        map<int,int> mp;
        for(int i=0;i<k;i++){
             mp[nums[i]]++;
            sum+=nums[i];
        }
        if(mp.size()==k){
        maxsum=sum;
        }
        for(int j=k;j<nums.size();j++){
            mp[nums[j-k]]--;
            if(mp[nums[j-k]]==0){
                mp.erase(nums[j-k]);
            }
            mp[nums[j]]++;
            sum=sum-nums[j-k]+nums[j];
            if(mp.size()==k){
                maxsum=max(maxsum,sum);
            }
        
        }
        return maxsum;
    }
};