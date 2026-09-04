class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();

        for(int i=0; i<n; i++){
            int maxx = *max_element(nums.begin(), nums.begin()+i);
            int minn = *min_element(nums.begin()+i, nums.end());

            if(maxx - minn <= k){
                
                return i;
            }

        }

        return -1;
        
    }
};