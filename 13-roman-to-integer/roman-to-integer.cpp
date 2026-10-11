class Solution {
public:
    int roman(char c){
        
        if(c=='V'){
            return 5;
        }
        if(c=='X'){
            return 10;
        }
        if(c=='L'){
            return 50;
        }
        if(c=='C'){
            return 100;
        }
        if(c=='D'){
            return 500;
        }
        if(c=='M'){
            return 1000;
        }
        return 1;

    }
    int romanToInt(string s) {
        int ans = roman(s[0]);
        int n = s.size();
        for(int i=1; i<n; i++){
            ans += roman(s[i]);

            if(roman(s[i])>roman(s[i-1])){
                ans -= 2*roman(s[i-1]);
            }
            

        }

        return ans;
      
    }
};