class Solution {
public:
    int reverse(int x) {
        int sign = 0;

        if (x >= 2147483647 || x <= -2147483648) return 0;

        if (x<0){
            x*=-1; //reverse sign
            sign = 1;
        }

        int result = 0;
        while(x != 0){
            if(result > 214748364.7) return 0;
            result = result * 10 + (x%10);
            x /= 10;
            std::cout << result << std::endl;
        }

        if(sign == 1){
            result *= -1;
        }
        return result;
    }
};