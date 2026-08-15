class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();

        int ans = nums[0];
        int count = 0;
        bool allZero = true;

        if(nums[0] != 0)
            allZero = false;

        for(int i = 1; i < n; i++){
            ans = ans ^ nums[i];
            count++;

            if(nums[i] != 0)
                allZero = false;
        }

        if(allZero)
            return 0;

        if(ans != 0){
            count = count + 1;
        }

        return count;
    }
};