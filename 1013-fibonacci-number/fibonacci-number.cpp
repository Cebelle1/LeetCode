class Solution {
public:
    int fib(int n) {
        unordered_map<int, int> memo;
        return fib(n, memo);

    }

    int fib(int n, unordered_map<int, int>& memo){
        if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }

        if(memo.find(n) == memo.end()){
            memo[n] = fib(n-1, memo) + fib(n-2, memo);
        }
        return memo[n];
    }
};