/*
====================================================
 Problem   : Move Zeroes
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:

- Use a pointer to track the position of the next non-zero element
- Traverse the array and copy each non-zero value to the front in order
- After placing all non-zero elements, fill the remaining positions with zeros
- This keeps relative order and works in-place


 Time Complexity : O(n)
 Space Complexity: O(1)


 Problem Link:[LeetCode]( https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3157/ )


====================================================
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int i = 0;
        for (int n = 0; n < nums.size(); n++)
        {
            if (nums[n] != 0)
                nums[i++] = nums[n];
        }
        while (i < nums.size())
            nums[i++] = 0;
    }
};