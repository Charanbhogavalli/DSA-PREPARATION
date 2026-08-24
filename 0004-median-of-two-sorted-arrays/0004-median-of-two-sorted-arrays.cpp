class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans;
        int x=max(n,m);
        for(int i=0;i<x;i++){
            if(i<n){
            ans.push_back(nums1[i]);
            }
            if(i<m){
            ans.push_back(nums2[i]);
            }
        }
        sort(ans.begin(),ans.end());
        int mid= (ans.size()-1)/2;
        if(ans.size()%2==0){
            return (ans[mid]+ans[mid+1])/2.0;
        }
        return ans[mid];
    }
};