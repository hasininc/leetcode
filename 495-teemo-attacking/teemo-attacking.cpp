class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        int n = timeSeries.size();
        int ans = duration;
        

        for(int i=1; i<n; i++){
            
            ans += min((timeSeries[i] - timeSeries[i-1]), duration);
            
            


        }

        return ans;
    }
};