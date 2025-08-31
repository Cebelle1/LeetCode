class Solution {
public:
    bool isPalindrome(int x) {
        
        //Negative numbers && nums ending with 0 are not palindromes
        if(x < 0 || x%10 == 0 && x!=0)  return false;
        if(x/10 == 0) return true; //single digits are palindromes
        long reversed = 0;
        int xx = x;
        while(xx !=0){
            reversed = reversed * 10 + xx%10;
            xx/=10;
        }

        return x == reversed;
    }
};