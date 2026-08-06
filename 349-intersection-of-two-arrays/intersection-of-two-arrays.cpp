class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set <int> p(nums1.begin(), nums1.end());

        vector<int> ans;

        for(auto &x : nums2){
            if(p.count(x)){
                ans.push_back(x);
                p.erase(x);
            }
            

        }

        return ans;
        
    }
};