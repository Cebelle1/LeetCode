#include <stack>

class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2){
            return false;
        }
        stack<char> st;
        for(char par: s){
            if(par == '(' || par == '[' || par == '{')
            {
                 st.push(par);
                 std::cout << "pushing " << par << std::endl;
            } else {
                if(st.empty()){
                    return false;
                }
               char compare = st.top();
               std::cout << compare << std::endl;
               st.pop();
               if(
                    compare == '(' && par != ')' ||
                    compare == '[' && par != ']' ||
                    compare == '{' && par != '}'
                ){
                    return false;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};