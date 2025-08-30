class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.length() == 0) return 0;
        stack<int> stk;
        stk.push(-1); // store indices instead of the char
        int result = 0;

        for(int i=0; i< s.length(); i++){
            if(s[i] == '('){
                stk.push(i);
            }else{
                stk.pop();
                if(!stk.empty()){
                    result = max(result, i - stk.top());
                } else {
                    stk.push(i); //new valid index
                }

            }
        }
        return result;
        
    }
};