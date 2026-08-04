class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        long left=0;
        long right=x/2;
        while(left<=right){
            long long mid=left+(right-left)/2;
            long long sqrt=mid*mid;
            if(sqrt==x){
                return mid;
            }
            else if(sqrt>x){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return right;
    }
};