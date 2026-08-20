class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int num=0;
        for(int i=0;i<tokens.size();i++){
           string ch=tokens[i];
           if (ch != "+" && ch != "-" && ch != "*" && ch != "/") {
                st.push(stoi(ch));
           }
           
            else if(ch=="+"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                int ans=first+second;
                st.push(ans);

              }
            else if(ch=="-"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                int ans=second-first;
                st.push(ans);

              }
            else  if(ch=="/"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                int ans=second/first;
                st.push(ans);

              }
            else if(ch=="*"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                int ans= second*first;
                st.push(ans);

              }
            }
        
      return st.top();  
    }
};