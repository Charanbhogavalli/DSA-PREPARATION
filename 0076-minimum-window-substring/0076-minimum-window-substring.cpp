class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()){
            return "";
        }
        int n=t.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[t[i]]++; 
        }
        int start=0;
        int minlen=INT_MAX;
        int left=0;
        int count=t.size();
         
        for(int right=0;right<s.size();right++){
            if(mp[s[right]]>0){
                count--;
            }
            mp[s[right]]--;
            while(count==0){
                if((right-left+1)<minlen){
                minlen=right-left+1;
                start=left;;
                }
                mp[s[left]]++;
                if(mp[s[left]]>0){
                    count++;
                }
                left++;
            }
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(start,minlen);
    }
};