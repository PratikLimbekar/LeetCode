/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge
*/

// We learnt - 2 POINTERS

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left, right, j, temp;
        j = 0;
        left = 0;
        if (nums.size() > 0) {
            right = nums.size() - 1;
        }
        else {
            return 0;
        }
        while (left <= right ) {
            if (nums[right] == val) {
                right--;
            }
            else if (nums[left] == val) {
                temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
                right--;
                left++;
                j++;
            }
            else {
                j++;
                left++;
            }
        }
        return j; 
    }
};
