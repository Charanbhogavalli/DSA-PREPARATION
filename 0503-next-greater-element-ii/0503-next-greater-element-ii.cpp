class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        stack<int> st;
        
        int n=nums.size();
        vector<int> ans(n,-1);
        for(int i=0;i<2*nums.size()-1;i++){
          int current=nums[i%n];
          while(!st.empty() && nums[st.top()]<current){
            ans[st.top()]=current;
            st.pop();
          }
          if(i<n){
          st.push(i);
          }
        }
          
        
        return ans;
    }
};