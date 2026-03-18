/*
====================================================
 Problem   :  Duplicate Zeros
 Platform  : LeetCode
 Topic     : Arrays 
 Difficulty: Easy

 Approach:
- Count the total number of zeros in the array
- Use a backward pass from the end of the array
- Shift each element to the right by the number of remaining zeros
- If the element is zero, duplicate it by writing an extra zero at the shifted position
- Stop when all elements are placed within the array bounds

 Time Complexity : O(n)
 Space Complexity: O(1)


 Problem Link:[LeetCode](https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3245/)

====================================================
*/
class Solution {
public:

    int CountZeroInArray(vector <int>arr)
    {

        int count = 0;
        for (int value : arr)
            if (value == 0)
                count++;

        return count;
    }

    void duplicateZeros(vector<int>& arr)
    {
        int CountZero = CountZeroInArray(arr);
        int n = arr.size();

        for (int i = n - 1; i >= 0; i--)
        {
            if (i + CountZero < n)
                arr[i + CountZero] = arr[i];

            if (arr[i] == 0)
            {
                CountZero--;

                if (i + CountZero < n)
                    arr[i + CountZero] = 0;
            }
        }

    }
};
