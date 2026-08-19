class Solution {
private:
    int largestarea(vector<int>& heights){
        stack<int> st;
        int maxarea=0;
        int n=heights.size();
        for(int i=0;i<=n;i++){
            int current=(i==n) ? 0 : heights[i];
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
    };
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        unordered_map<int,int> mp;
        int r=matrix.size();
        int c=matrix[0].size();
        int maxarea=0;
        vector<int> heights(c,0);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]=='1'){
                    heights[j]++;
                }
                else{
                    heights[j]=0;
                }
            }
            maxarea=max(maxarea,largestarea(heights));
        }
         
     return maxarea;     
    }
};