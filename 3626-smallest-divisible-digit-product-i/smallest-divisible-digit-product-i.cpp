class Solution {
public:
    int prod(int num){

        int p = 1;

        while(num>0){
            int dig = num % 10;
            p *= dig;
            num = num /10;

        }

        return p;

    }


    int smallestNumber(int n, int t) {

        
        while(1){
            if(prod(n)%t == 0){
                return n;
                
            }
            n++;

            }
        }

        
      
        
    
};