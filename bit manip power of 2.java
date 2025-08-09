class Solution {
    public boolean isPowerOfTwo(int n) {
        if (n == 1) {
            return true;
        }
        if (n > 1 && (n & (n-1)) == 0) { //bit manipulation used here
            //every 2^n number is 1000 and n-1 would be 0111
            // after and-ing these, we get 0 hehe
          
            return true;
        }
        else {
            return false;
        }
    }
}
