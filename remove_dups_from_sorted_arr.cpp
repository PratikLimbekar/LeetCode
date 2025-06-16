/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

//Learnt: Set and its functions
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> seen;
        auto it = nums.begin();
        while (it != nums.end()) {
            if (seen.count(*it)) {
                auto it2 = it;
                cout << "Erased " << *it2 << endl;
                nums.erase(it2);
                //++it;
            }
            else {
                seen.insert(*it);
                cout << "inserted " << *it << endl;
                ++it;
            }
        }
        return nums.size();
    }
};
