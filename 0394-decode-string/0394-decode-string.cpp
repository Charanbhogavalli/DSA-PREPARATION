class Solution {
public:
    string decodeString(string s) {
        stack<string> strings;
        stack<int> numbers;
        string curr="";
        int num=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(isdigit(ch)){
                num=num*10+(ch-'0');
            }
            else if(ch=='['){
                numbers.push(num);
                strings.push(curr);
                num=0;
                curr="";
            }
            else if(ch==']'){
                int repeat=numbers.top();
                numbers.pop();
                string prev=strings.top();
                strings.pop();
                string temp="";
                for(int i=0;i<repeat;i++){
                    temp+=curr;
                }
                curr=prev+temp;
            }
            else{
                curr+=ch;
            }
        }
       return curr; 
    }
};