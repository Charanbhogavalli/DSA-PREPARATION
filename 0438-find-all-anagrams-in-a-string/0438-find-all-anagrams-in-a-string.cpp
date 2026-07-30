class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp;
        int k=p.size();
        int n=s.size();
        vector<int> ans;
        for(int i=0;i<p.size();i++){
            mp[p[i]]++;

        }
        int left=0;
        int count=p.size();
    for (int j = 0; j < n; j++) {

    if (mp[s[j]] > 0)
        count--;

    mp[s[j]]--;

    if (j - left + 1 > k) {

        if (mp[s[left]] >= 0)
            count++;

        mp[s[left]]++;
        left++;
    }

    if (count == 0)
        ans.push_back(left);
}

return ans;
        return ans;
    }
};