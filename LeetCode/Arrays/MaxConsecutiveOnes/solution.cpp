/*
====================================================
 Problem   : Max Consecutive Ones
 Platform  : LeetCode
 Topic     : Arrays 
 Difficulty: Easy

 Approach:
- Initialize two counters: `count` for current consecutive 1s, `maxCount` for the maximum
- Traverse the array:
      * If element is 1, increment `count`
      * If element is 0, update `maxCount` with `count` and reset `count` to 0
      
- After the loop, update `maxCount` one last time to account for ending 1s
- Return `maxCount`


 Time Complexity : O(n)
 Space Complexity: O(1)


 Problem Link:[LeetCode](https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3238/)

====================================================
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, Max = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                Max = max(Max, count);
                count = 0;
            }
        }
        Max = max(Max, count);
        return Max;
    }
};