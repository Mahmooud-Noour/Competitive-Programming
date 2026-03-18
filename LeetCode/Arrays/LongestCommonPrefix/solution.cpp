/*
======================================================================
 1.Problem   : 14.Longest Common Prefix
 2.Platform  : LeetCode
 3.Topic     : Array & String
 4.Difficulty: Easy

 5.Approach :
   - Strategy: Vertical Scanning. Instead of comparing strings in pairs, compare characters at each index across all strings simultaneously.
   - Horizontal Pass: Iterate through each character of the first string (the "reference" string).
   - Vertical Validation: For each character at index i, check if the same character exists at the same index in all other strings.
   - Termination: Stop and return the prefix found so far if:
       - The current index i reaches the end of any string in the array.
       - A character mismatch is found at index i.
    - Result: If the loop finishes without a mismatch, the entire first string is the common prefix.

 6.Time Complexity : O(S) Where S is the sum of the number of letters in all words.
 7.Space Complexity: O(1)

 8.Problem Link: (  https://leetcode.com/problems/longest-common-prefix )
======================================================================
*/
// Here Code
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        for (int i = 0; i < strs[0].length(); i++) {
            char c = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (i == strs[j].length() || strs[j][i] != c) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};