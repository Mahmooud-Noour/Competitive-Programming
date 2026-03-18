/*
====================================================
 Problem   : Squares of a Sorted Array
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:
- Use two pointers, one at the start and one at the end of the array
- Compare absolute values of elements at both pointers
- Place the larger square at the end of the result array, moving backward
- Move the pointer of the larger absolute value inward
- Repeat until all elements are placed in sorted order



 Problem Link:[LeetCode](https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3240/)

====================================================
*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = pow(nums[i], 2);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};