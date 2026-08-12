class Solution {
private:
    bool checkspilt(vector<int>&nums,int mid,int k){
        int sum=0;
        int spilt=1;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                spilt++;
                sum=nums[i];
            }
        }
        return spilt<=k;
    }
public:
    int splitArray(vector<int>& nums, int k) {
     int low=*max_element(nums.begin(),nums.end());
     int high=0;
     for(int i=0;i<nums.size();i++){
        high+=nums[i];
     }
     int ans=0;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(checkspilt(nums,mid,k)){
          ans=mid;
          high=mid-1;;
        }
        else{
          low=mid+1;
        }
     }
     return ans;
    }
};