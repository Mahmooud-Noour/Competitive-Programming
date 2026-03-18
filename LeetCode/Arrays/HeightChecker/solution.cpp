/*
====================================================
 Problem   : Height Checker
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:

- Create a copy of the original heights array
- Sort the copied array to get the expected order
- Compare each index of the original array with the sorted one
- Count how many positions have different values
- Return the count


Time Complexity : O(n log n)
 Space Complexity: O(n)


 Problem Link:[LeetCode]( https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3228/ )

 ====================================================
*/
class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        vector <int> expected = heights;
        sort(expected.begin(), expected.end());
        int k = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            if (expected[i] != heights[i])++k;
        }
        return k;
    }
};