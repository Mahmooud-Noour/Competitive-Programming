/*
====================================================
 Problem   : Third Maximum Number
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:

- Initialize three variables to track the first, second, and third distinct maximums
- Iterate through the array, skipping numbers already stored as a maximum
- Update the maximums in order if the current number is larger than any of them
- After traversal, return the third maximum if it exists; otherwise, return the first maximum


 Time Complexity : O(n)
 Space Complexity: O(1)


 Problem Link:[LeetCode]( https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3231/ )


====================================================
*/
class Solution {
public:
    int thirdMax(vector<int>& nums)
    {
        long long  Max1 = LLONG_MIN, Max2 = LLONG_MIN, Max3 = LLONG_MIN;

        for (int num : nums)
        {
            if (num == Max1 || num == Max2 || num == Max3) continue;

            if (num > Max1)
            {
                Max3 = Max2;
                Max2 = Max1;
                Max1 = num;
            }
            else if (num > Max2)
            {
                Max3 = Max2;
                Max2 = num;
            }
            else if (num > Max3)
            {
                Max3 = num;
            }
        }

        return Max3 == LLONG_MIN ? Max1 : Max3;

    }
};