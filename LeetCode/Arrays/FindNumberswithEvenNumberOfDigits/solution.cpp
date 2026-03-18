/*
====================================================
 Problem   : Find Numbers with Even Number of Digits
 Platform  : LeetCode
 Topic     : Arrays 
 Difficulty: Easy

 Approach:
- Initialize a counter for numbers with even digits
- For each number in the array, count its digits by dividing by 10 repeatedly
- Check if the digit count is even
- If yes, increment the counter
- Return the counter at the end

 Time Complexity : O(n)
 Space Complexity: O(1)

 
 Problem Link:[LeetCode](https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/)

====================================================
*/
class Solution {
public:

    bool IsEvenNumberOfDigits(int Num)
    {
        int count = 0;
        while (Num > 0)
        {
            Num = Num / 10;
            count++;
        }
        return count % 2 == 0;
    }

    int findNumbers(vector<int>& nums) {

        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (IsEvenNumberofDigits(nums[i]))
                count++;
        }
        return count;
    }
};