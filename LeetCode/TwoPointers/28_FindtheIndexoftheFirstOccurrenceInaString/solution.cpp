/*
====================================================
 Problem   : 28. Find the Index of the First Occurrence in a String
 Platform  : LeetCode
 Topic     : Two Pointers
 Difficulty: Easy

 Approach:

- Use the built-in string search function (`find`) to locate `needle` in `haystack`
- If found, return the index
- If not found, return -1

 Time Complexity : O((n - m + 1) * m)  ; n = haystack.size(), m = needle.size()
 Space Complexity: O(1)


 Problem Link:[LeetCode]( https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/ )


====================================================
*/
class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int pos = -1;

        if ((pos = haystack.find(needle)) != string::npos)
            return pos;

        return pos;
    }
};