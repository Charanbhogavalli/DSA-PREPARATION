class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for(int i=s.size()-1;i>=0;i--){
            char ch=s[i];
            if(!st.empty()){
                if(ch=='C' && st.top()=='D'){
                    st.pop();
                    continue;
                }
                else if(ch=='A' && st.top()=='B'){
                    st.pop();
                    continue;
                }
                
            }
            st.push(ch);
        }  
        return st.size();
        
    }
};