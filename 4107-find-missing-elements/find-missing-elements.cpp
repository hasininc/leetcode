class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int minVal = nums[0];
        int maxVal = nums[0];

        unordered_set<int> s;

        for(int x : nums){
            minVal = min(minVal, x);
            maxVal = max(maxVal, x);
            s.insert(x);
        }

        vector<int> ans;

        for(int i = minVal; i <= maxVal; i++){
            if(s.find(i) == s.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }
};