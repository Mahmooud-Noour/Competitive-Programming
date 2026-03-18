/*
====================================================
 Problem   : Merge Sorted Array
 Platform  : LeetCode
 Topic     : Arrays 
 Difficulty: Easy

 Approach:
- Use two pointers starting from the end of the valid parts of `nums1` (`m-1`) and `nums2` (`n-1`)
- Fill `nums1` from the last index (`m + n - 1`)
- Compare elements at the pointers, place the larger at the current index, and move that pointer left
- Repeat until all elements from `nums2` are merged
- No need to move remaining `nums1` elements since they are already in place

 Time Complexity : O(m + n)
 Space Complexity: O(1)


 Problem Link:[LeetCode](https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3253/)

====================================================
*/
class Solution {

public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i = m + n - 1;
        --m; --n;

        while (n >= 0)
        {

            if (m >= 0 && nums1[m] > nums2[n])
            {
                nums1[i] = nums1[m];
                --m;
            }
            else
            {
                nums1[i] = nums2[n];
                --n;
            }
            --i;
        }

    }
};