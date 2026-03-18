/*
====================================================
 Problem   : Find All Numbers Disappeared in an Array
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:

- Use the array itself to mark visited numbers
- For each value `x`, mark the element at index `x - 1` as negative
- After marking, iterate through the array
- Indices that remain positive correspond to missing numbers
- Collect those indices + 1 as the result



 Time Complexity : O(n)
 Space Complexity: O(1)


 Problem Link:[LeetCode]( https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3270/ )

====================================================
*/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int index = abs(nums[i]) - 1;
            nums[index] = -abs(nums[index]);
        }

        vector<int> result;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
                result.push_back(i + 1);
        }

        return result;
    }
};