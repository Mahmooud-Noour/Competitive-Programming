/*
====================================================
 Problem   : Remove Duplicates from Sorted Array
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:

- Use two pointers: one to iterate through the array and one to track the position of unique elements
- Since the array is sorted, duplicates will be adjacent
- Compare the current element with the last unique element stored
- If different, place it at the next unique position and move the pointer
- Return the count of unique elements (`k`)


Time Complexity : O(n)
 Space Complexity: O(1)

 Problem Link:[LeetCode](https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3248/)


====================================================
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.empty()) return 0;

        int length = 1;
        for (int num : nums)
            if (num != nums[length - 1])
            {
                nums[length] = num;
                length++;
            }
        return length;
    }
};