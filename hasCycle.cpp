/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// #include <algorithm>
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         set<ListNode*> out;
//         ListNode* cur = head;
//         while(cur != nullptr){
//             if(out.count(cur) != 0) return true;
//             out.insert(cur);
//             cur = cur->next;
//         }
//         return false;

//     }
// };

#include <algorithm>
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        if (!head)
            return false;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                return true;
        }
        return false;
    }
};