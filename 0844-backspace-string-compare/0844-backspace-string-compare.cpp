class Solution {
private:
    string checkit(string s){
        int hashmap=0;
        string ans;
     for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='#'){
           hashmap++;
           continue;
        }
        else{
            if(hashmap>0){
                hashmap--;
            }
            else{
             ans+=s[i];
            }
        }
     }
     return ans;
    }
public:
    bool backspaceCompare(string s, string t) {
        if(checkit(s)==checkit(t)){
            return true;
        }
        return false;
    }
};