class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();

        unordered_map<int, int> freq;
        int k = n / 2;

        for(int i=0; i<n; i++){
            freq[candyType[i]]++;

        }

        int count = freq.size();

        if(k > count){
            return count;
        }
        return k;

       
    }
};