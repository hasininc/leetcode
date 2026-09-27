class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string t = "";
        for(char c : s){

        if(c == '('){
            st.push(t);
            t = "";

        }else if(c == ')'){
            
            reverse(t.begin(), t.end());

            string prev = st.top();
                st.pop();

                t = prev + t;
        }
            else{
                t.push_back(c);

            }
            }
        return t;
        
    }
};