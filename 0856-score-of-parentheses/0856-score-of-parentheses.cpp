class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char> st;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
              st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                    count++;
                }
            }
        }
        return count;
    }
};