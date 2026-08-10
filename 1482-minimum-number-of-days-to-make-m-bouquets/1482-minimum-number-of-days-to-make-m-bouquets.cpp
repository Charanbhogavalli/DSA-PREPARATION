class Solution {
private:
    bool checkday(vector<int> bloom,int m,int k,int day){
        int b=0,c=0;
        for(int i=0;i<bloom.size();i++){
            if(bloom[i]<=day){
                c++;
                if(c>=k){
                    b++;
                    c=0;
                }
            }
            else{
                c=0;
            }
        }
        return b>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m * k > bloomDay.size())
    return -1;
        int left=*min_element(bloomDay.begin(),bloomDay.end());
        int right=*max_element(bloomDay.begin(),bloomDay.end());
        while(left<=right){
            int mid=left+(right-left)/2;
            if(checkday(bloomDay,m,k,mid)){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
     return left;   
    }
};