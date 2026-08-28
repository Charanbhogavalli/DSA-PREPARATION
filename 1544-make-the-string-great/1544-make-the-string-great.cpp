class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(!st.empty()){
                if(tolower(st.top())==tolower(ch) && s[i]!=st.top()){
                    st.pop();
                    continue;
                }
            }
            st.push(ch);
        }
        string ans;
        while(!st.empty()){
           char temp=st.top();
           st.pop();
           ans+=temp;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};