class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n);
        
         prefix[0]=1;
        for(int i=1;i<nums.size();i++){
            prefix[i]=nums[i-1]*prefix[i-1];
        }
         
        int rightprod=1;
        for(int i=n-1;i>=0;i--){
            prefix[i]=(rightprod*prefix[i]);
            rightprod=(rightprod*nums[i]);
        }
        return prefix;
    }
};