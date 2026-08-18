class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        int maxarea=0;
        for(int i=0;i<=n;i++){
           int current = (i == n) ? 0 : heights[i];

            while(!st.empty() && heights[st.top()]>current){
                int height=heights[st.top()];
                st.pop();
                int width;
                if(st.empty()){
                       width=i;
                }
                else{
                      width=i-st.top()-1;
                }
               maxarea=max(maxarea,height*width); 
            }
            st.push(i);
        }
      return maxarea;  
    }
};