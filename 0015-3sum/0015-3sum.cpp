class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    //  initialization of nums size in n
    int n=nums.size();
    // initialization of vector for storing ans
    vector<vector<int>> ans;
    // sorting the nums array for using 2 pointers
    sort(nums.begin(),nums.end());
    // initialization of loops for finding and storing ans
    for(int i=0;i<n-2;i++){
        if(i!=0 && nums[i]==nums[i-1]){
            continue;
        }
        
            int j=i+1;
            int k=n-1;
        
        while(j<k){
            if(nums[i]+nums[j]+nums[k]==0){
              ans.push_back({nums[i],nums[j],nums[k]});
              while(j<k && nums[j]==nums[j+1]){
                j++;
              }
              while(j<k && nums[k]==nums[k-1]){
                k--;
              }
              j++;
              k--;
            }
            else if(nums[i]+nums[j]+nums[k]>0){
                k--;
            }
            else{
                j++;
            }
        }
    }
    // returning ans
    return ans;
    }
};