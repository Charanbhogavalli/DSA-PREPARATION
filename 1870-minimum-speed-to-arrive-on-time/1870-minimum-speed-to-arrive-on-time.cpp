class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int left=1;
        int right=10000000;
        
        while(left<=right){
            int mid=left+(right-left)/2;
            double thrs=0;
            for(int i=0;i<dist.size()-1;i++){
               thrs+=(dist[i]+mid-1)/mid;
            }
            thrs += (double)dist.back() / mid;
            if(thrs<=hour){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        if(left>10000000){
            return -1;
        }
        return left;
    }
};