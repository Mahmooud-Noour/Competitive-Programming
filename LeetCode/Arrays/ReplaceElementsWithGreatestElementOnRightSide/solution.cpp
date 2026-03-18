/*
====================================================
 Problem   : Replace Elements with Greatest Element on Right Side
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:

- Traverse the array from right to left
- Keep a variable to store the maximum element seen so far
- Replace the current element with the stored maximum
- Update the maximum using the original value of the current element
- Initialize the maximum as `-1` so the last element becomes `-1`




 Time Complexity : O(n)
 Space Complexity: O(1)


 Problem Link:[LeetCode]( https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3259/ )


====================================================
*/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr)
    {
        int n = arr.size();
        int Max = -1;

        for (int i = n - 1; i >= 0; --i)
        {
            int current = arr[i];
            arr[i] = Max;
            Max = max(Max, current);
        }
        return arr;
    }
};