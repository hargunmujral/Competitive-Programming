/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// First implementation (a bit confusing)

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* cur = nullptr;
//         while(head){
//             ListNode* temp = head->next;
//             head->next = cur;
//             cur = head;
//             head = temp;
//         }
//         return cur;
//     }
// };

// second implementation (easier to understand)
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *next = nullptr;
        ListNode *cur = head;
        while (cur)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return cur;
    }
};