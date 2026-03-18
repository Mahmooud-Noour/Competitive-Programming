/*
====================================================
 Problem   : 141. Linked List Cycle
 Platform  : LeetCode
 Topic     : Two Pointers
 Difficulty: Easy

 Approach:
 
- Use two pointers: `slow` moves one step, `fast` moves two steps
- Traverse the list while `fast` and `fast->next` are valid
- If there is a cycle, the two pointers will eventually meet
- If `fast` reaches the end (`null`), there is no cycle
- Return true if pointers meet, otherwise false


 Time Complexity : O(n)
 Space Complexity: O(1)


 Problem Link:[LeetCode]( https://leetcode.com/problems/linked-list-cycle/description/ )


====================================================
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) return true;
        }
        return false;

    }
};