/*Problem: You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?*/

/*Learnt: Fibonacci Series*/

class Solution {
public:
    int climbStairs(int n) {
        //Fibonacci Series hai
        int m = 1;
        if (n == 1) {
            return m;
        }
        int p = 1;
        int sum = 0;
        for (int i = 0; i <= n; i++) {
            p = m;
            m = sum;
           sum = m + p;
        }
        return sum;
    }
};
