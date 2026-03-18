/*
====================================================
 Problem   :  Valid Mountain Array
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:

- If the array length is less than 3, return false
- Traverse from the start while elements are strictly increasing
- The peak cannot be at the first or last position
- After reaching the peak, traverse while elements are strictly decreasing
- Return true only if the traversal ends at the last index


 Time Complexity : O(n)
 Space Complexity: O(1)

 Problem Link:[LeetCode](https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3251/)

====================================================
*/
class Solution
{
public:

    bool validMountainArray(vector<int>& arr)
    {

        int n = arr.size();

        if (n < 3) return false;

        int i = 0;

        while (i + 1 < n && arr[i] < arr[i + 1]) i++;

        if (i == 0 || i == n - 1) return  false;

        while (i + 1 < n && arr[i] > arr[i + 1]) i++;

        return i == n - 1;
    }

};