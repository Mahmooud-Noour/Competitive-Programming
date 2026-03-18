/*
====================================================
 Problem   : Sort Array By Parity
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:

- Use two pointers: one from the start and one from the end
- Move the left pointer forward while it points to an even number
- Move the right pointer backward while it points to an odd number
- When left is odd and right is even, swap them
- Continue until the pointers meet, ensuring evens come before odds

 Time Complexity : O(n)
 Space Complexity: O(1)


 Problem Link:[LeetCode]( https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3260/ )


====================================================
*/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums)
    {
        int i = 0, j = nums.size() - 1;

        while (i < j)
        {
            int current = 0;
            if (nums[i] % 2 != 0 && nums[j] % 2 == 0)
            {
                current = nums[j];
                nums[j] = nums[i];
                nums[i] = current;
                ++i;
                --j;
            }
            if (nums[i] % 2 == 0)++i;
            if (nums[j] % 2 != 0)--j;
        }

        return nums;
    }
};