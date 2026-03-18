/*
====================================================
 Problem   : Check If N and Its Double Exist
 Platform  : LeetCode
 Topic     : Arrays
 Difficulty: Easy

 Approach:

- Use a hash set to store numbers as you iterate through the array
- For each number `num`, check if `2 * num` or `num / 2` (if even) exists in the set
- If yes, return true
- Otherwise, add `num` to the set and continue
- Return false if no such pair is found

 Time Complexity : O(n)
 Space Complexity: O(n)


 Problem Link:[LeetCode](https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/)


====================================================
*/
class Solution
{
public:
    bool checkIfExist(vector<int>& arr) 
    {
        unordered_set<int> st;

        for (int num : arr)
        {
            if (st.count(2 * num) || (num % 2 == 0 && st.count(num / 2)))
                return true;
            st.insert(num);
        }
        return false;
    }

    
};