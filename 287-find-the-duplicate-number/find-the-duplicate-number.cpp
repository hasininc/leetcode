class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();
        int ans = 0;

        unordered_map<int ,int> freq;

        for(int x : nums){
            freq[x]++;

        }

        for(int i=0; i<n; i++){
            if(freq[nums[i]]>1){
                ans = nums[i];

                break;
            }

        }

        
        return ans;

        
    }
};