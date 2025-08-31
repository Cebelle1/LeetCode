class Solution {
public:
    bool isPalindrome(int x) {
        //Negative numbers are not palindromes
        if( x<0) return false;
        stack<char> s;
        string xStr = to_string(x);
        
        for(int i=0; i<xStr.length(); i++){
            s.push(xStr[i]);
        }
        for(int i=0; i<xStr.length(); i++){
            char compare = s.top();
            s.pop();
            if(compare != xStr[i]) return false;
        }
       

        return true;
    }
};