class Solution {
private:
    bool checkdistance(vector<int>& position,int m,int mid){ 
        int count=1;
        int lastelement=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-lastelement>=mid){
            count++;
            lastelement=position[i];
            }
        }
        if(count>=m){
            return true;
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int left=1;
        int right=*max_element(position.begin(),position.end());
        right=right-(*min_element(position.begin(),position.end())); 
        while(left<=right){
            int mid=left+(right-left)/2;
            if(checkdistance(position,m,mid)){
                   left=mid+1;
            }
            else{ 
                 right=mid-1;
            }
        }
      return right;  
    }
};