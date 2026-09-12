class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        
        int min_count = k;
        int n = blocks.size();

        for(int i=0; i<=n-k; i++){
            int count = 0;
            
            for(int j=0; j<k; j++){

            if(blocks[i+j] == 'B'){
                count++;
            }
            }
            min_count = min(k-count, min_count);





        }
        return min_count;
        
    }
};