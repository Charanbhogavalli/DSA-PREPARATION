class Solution {
public:
    int expand(string s,int i,int j){
        while(i>=0 && j<=s.size()-1 && s[i]==s[j]){
            i--;
            j++;

        }
        return j-i-1;
    }
    string longestPalindrome(string s) {
        int start=0;
        int end=0;
        for(int i=0;i<s.size();i++){
            int len1=expand(s,i,i);
            int len2=expand(s,i,i+1);
            int maxlen= max(len1,len2);
            if(maxlen>end-start+1){

                start=i-(maxlen-1)/2;
                end=i+(maxlen/2);
            }
        }
        return s.substr(start,end-start+1);
    }
};