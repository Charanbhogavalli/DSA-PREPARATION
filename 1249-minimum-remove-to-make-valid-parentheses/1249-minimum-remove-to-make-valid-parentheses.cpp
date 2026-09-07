class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch!='(' && ch!=')'){
              ans+=ch;
            }
            else if(ch=='('){
                st.push((int)ans.size());
                ans+=s[i];
            }
            else if(!st.empty()){
                st.pop();
                ans+=s[i];
            }
            else{
                continue;
            }
        }
       while (!st.empty()) {
       ans.erase(st.top(), 1);
       st.pop();
      }
      return ans;
    }
};