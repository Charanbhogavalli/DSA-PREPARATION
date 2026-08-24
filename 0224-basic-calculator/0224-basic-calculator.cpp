 class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        long long ans = 0;
        long long num = 0;
        long long sign = 1;

        for (int i = 0; i < s.size(); i++) {
            
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            
            else if (s[i] == '+') {
                ans += sign * num;
                num = 0;
                sign = 1;
            }
            
            else if (s[i] == '-') {
                ans += sign * num;
                num = 0;
                sign = -1;
            }
            
            else if (s[i] == '(') {
                st.push(ans);
                st.push(sign);

                ans = 0;
                sign = 1;
            }
            
            else if (s[i] == ')') {
                ans += sign * num;
                num = 0;

                ans *= st.top(); 
                st.pop();

                ans += st.top(); 
                st.pop();
            }
        }

        return ans + sign * num;
    }
};