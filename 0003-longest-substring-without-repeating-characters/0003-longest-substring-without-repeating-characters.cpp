class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int count=0;
        int maxcount=0;
        int left=0;
        for(int right=0;right<s.size();right++){
             while(mp[s[right]] > 0){
                mp[s[left]]--;
                left++;
                count--;
                }
                mp[s[right]]++;
                count++;
                maxcount=max(maxcount,count);
     
        }
        return maxcount;        
    }
};