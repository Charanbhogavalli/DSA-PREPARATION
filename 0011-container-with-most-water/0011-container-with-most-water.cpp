class Solution {
public:
    int maxArea(vector<int>& height) {
    // initialization of pointers and max area variable
     int l=0;
     int r=height.size()-1;
     int maxarea=0;
    //  using pointers for finding best height and width container
     while(l<=r){
        int wid=(r-l);
        int minheight=min(height[l],height[r]);
        int area=wid*minheight;
            maxarea=max(maxarea,area);
        if(height[l]>height[r]){
            r--;
        }
        else{
            l++;
        }
     
     }
    //  returning maxarea
     return maxarea;
    }
}; 