class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids){
        int n=asteroids.size();
        stack<int> st;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int current=asteroids[i];
            bool distroy=false;
            while(!st.empty() && current<0 && st.top()>0){ 
                if(st.top()==-current){
                    st.pop();
                    distroy=true;
                    break;
                }
                if(st.top()<-current){
                    st.pop();
                }
                else{
                   distroy=true;
                   break;
                }
                     
            }
            if(!distroy){
            st.push(current);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    } 
 };