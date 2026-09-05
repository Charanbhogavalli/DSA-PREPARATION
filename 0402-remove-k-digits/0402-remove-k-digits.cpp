class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(int i=0;i<num.size();i++){
            char ch=num[i];
            while(k>0 && !st.empty() && ch<st.top()){
                st.pop();
                k--;
            }
            st.push(ch);
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        string ans;
       while (!st.empty()) {
       ans += st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       int i=0;
       while (i < ans.size() - 1 && ans[i] == '0') {
           i++;
       }
       
       ans = ans.substr(i);
       if(ans.size()==0){
        return "0";
       }
       return ans;
    }
};