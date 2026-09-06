class Solution {
public:
    string smallestSubsequence(string s) {
     unordered_map<char,int> mp;
        unordered_map<char,bool> checked;
        stack<char> st;
        for(int i=0;i<s.size();i++){ 
            mp[s[i]]++; 
        } 
        for(int i=0;i<s.size();i++){
            mp[s[i]]--;
           if(checked[s[i]]){
            continue;
           }
        while(!st.empty() && st.top()>s[i] && mp[st.top()]>0){
             checked[st.top()]=false;
             st.pop();
        }
        st.push(s[i]);
        checked[s[i]]=true;
                 
        }
        string ans;
        while(!st.empty()){
            char temp=st.top();
            ans+=temp;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans.size()==0){
            return "0";
        }
        return ans;    
    }
};