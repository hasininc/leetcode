class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(), nums.end());
        int i=0;

        while(i<n){
            if(i==nums[i]){
                i++;
            }else{
                break;
            }

        }

        return i;
        
    }
};