class Solution {
public:
    int fib(int n) {
       //Recursive Approach
        if(n == 0 || n == 1){
            return n;
        }
        
        return fib(n-1) + fib(n-2);
        
    }
};

//Memoization
int fib(int N) {
        if(N < 2)
            return N;
        int memo[N+1];
        memo[0] = 0;
        memo[1] = 1;
        for(int i=2; i<=N; i++)
            memo[i] = memo[i-1] + memo[i-2];
        return memo[N];
    }
