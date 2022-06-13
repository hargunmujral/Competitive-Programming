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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *cur = head;
        ListNode *next = head->next;
        while (cur && next)
        {
            while (cur && next && next->val == cur->val)
            {
                cur->next = next->next;
                next->next = nullptr;
                delete next;
                next = cur->next;
            }
            if (cur)
                cur = cur->next;
            if (next)
                next = next->next;
        }
        return head;
    }
};