class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        while(left<=right){
            long mid=left+(right-left)/2;
            long long thrs=0;
            for(int i=0;i<n;i++){
                thrs+=(piles[i]+mid-1)/mid;
            }
            if(thrs<=h){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
     return left;   
    }
};