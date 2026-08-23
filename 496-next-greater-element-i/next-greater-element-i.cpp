class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {

            int j = 0;

            
            while (nums2[j] != nums1[i]) {
                j++;
            }

            
            j++;

            while (j < nums2.size() && nums2[j] < nums1[i]) {
                j++;
            }

            if (j < nums2.size())
                ans[i] = nums2[j];
            else
                ans[i] = -1;
        }

        return ans;
    }
};