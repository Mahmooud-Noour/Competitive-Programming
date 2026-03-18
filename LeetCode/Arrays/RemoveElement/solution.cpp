/*
====================================================
 Problem   :  Remove Element
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:

- Use a pointer `length = 0` to track the next position for non-`val` elements
- Iterate through the array:

  * If the current element is not `val`, place it at `nums[length]` and increment `length`
  
- After the loop, `length` is the count of elements not equal to `val`
- The first `length` elements of `nums` hold the result in-place




 Time Complexity : O(n)
 Space Complexity: O(1)


 Problem Link:[LeetCode](https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3247/)


====================================================
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {

        int length = 0;
        for (int num : nums)
            if (num != val)
                nums[length++] = num;

        return length;
    }
};