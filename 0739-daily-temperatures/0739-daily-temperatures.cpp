class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            int current=i;
            while(!st.empty() && temperatures[st.top()]<temperatures[current]){
                ans[st.top()]=current-st.top();
                st.pop();
            }
            st.push(i);
        }
       return ans; 
    }
};