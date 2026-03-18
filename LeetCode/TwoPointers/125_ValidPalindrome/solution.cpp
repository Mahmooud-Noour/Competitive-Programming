/*
====================================================
 Problem   : 125. Valid Palindrome
 Platform  : LeetCode
 Topic     : Two Pointers
 Difficulty: Easy

 Approach:

- Use two pointers, one at the start and one at the end of the string
- Move the pointers inward, skipping non-alphanumeric characters
- Compare characters in lowercase
- If any pair doesn’t match, return false
- If all pairs match, return true


 Time Complexity : O(n)
 Space Complexity: O(1)


 Problem Link:[LeetCode]( https://leetcode.com/problems/valid-palindrome/description/ )


====================================================
*/
class Solution {
public:
    bool isPalindrome(string s)
    {
        int first = 0, end = s.size() - 1;

        while (first < end)
        {
            while (first < end && !isalnum(s[first])) first++;
            while (first < end && !isalnum(s[end])) end--;

            if (tolower(s[first]) != tolower(s[end])) return false;
            first++;
            end--;
        }

        return true;
    }
};