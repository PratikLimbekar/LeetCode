/*Problem: Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.*/

/*Learnt: Binary search*/

class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        int ans;
        while (low <= high) {
            long mid = (low + high)/2;
            if (mid*mid == x) {
                return round(mid);
            }
            else if (mid*mid < x) {
                low = mid + 1;
                ans = mid;
            }
            else {
                high = mid-1;
            }
        }
        return ans;       
    }
};
