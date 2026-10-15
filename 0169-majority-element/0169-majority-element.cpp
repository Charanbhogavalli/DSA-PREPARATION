class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxnum=0;
        int index=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>maxnum){
                maxnum=mp[nums[i]];
                index=i;
            }
        }
        return nums[index];
    }
};