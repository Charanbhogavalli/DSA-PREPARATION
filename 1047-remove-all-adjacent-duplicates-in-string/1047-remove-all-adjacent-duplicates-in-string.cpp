 class Solution {
public:
    string removeDuplicates(string s) {
        string ans;

        for (int i = s.size() - 1; i >= 0; i--) {
            char ch = s[i];

            if (ans.size() > 0) {
                if (ans.back() == ch) {
                    ans.pop_back();
                }
                else {
                    ans.push_back(ch);
                }
            }
            else {
                ans.push_back(ch);
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};