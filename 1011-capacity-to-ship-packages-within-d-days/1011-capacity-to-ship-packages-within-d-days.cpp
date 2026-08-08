class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
    int left=*max_element(weights.begin(),weights.end());
    int right=0;
    for(int i=0;i<weights.size();i++){
        right+=weights[i];
    }
    while(left<=right){
        int mid=left+(right-left)/2;
        long long tdays=1;
        int current=0;
        for(int i=0;i<weights.size();i++){
            if(current+weights[i]<=mid){
                current+=weights[i];
            }
            else{
                tdays++;
                current=weights[i];
            }
        }
        if(tdays<=days){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return left;    
    }
};