class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {

        int n = nums.size();

        unordered_map <int, int> freq;

        for(int x : nums){
            freq[x]++;
            if(freq[x]>2){
                return false;
                break;
                
            }
            
        }
        return true;




        
    }
};