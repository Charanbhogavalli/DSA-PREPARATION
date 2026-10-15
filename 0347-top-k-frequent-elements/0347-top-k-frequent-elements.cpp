class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        while(k!=0){
         int maxfreq=0;
         int index=0;
         for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>maxfreq){
                maxfreq=mp[nums[i]];
                index=i;
            }
         }
            ans.push_back(nums[index]);
            k--;
            mp[nums[index]]=0;
         
        }
        return ans;
    }
};