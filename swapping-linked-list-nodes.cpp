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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *count = head;
        int len = 0;
        while (count)
        {
            len++;
            count = count->next;
        }
        if (len == 1)
            return head;
        if (len == 2)
        {
            ListNode *temp = head->next;
            head->next = nullptr;
            temp->next = head;
            head = temp;
            return head;
        }
        int first = k;
        int last = len - k + 1;
        ListNode *firstPt = head;
        ListNode *lastPt = head;
        while (--first > 0)
        {
            firstPt = firstPt->next;
        }
        while (--last > 0)
        {
            lastPt = lastPt->next;
        }

        int val2 = lastPt->val;
        int val1 = firstPt->val;
        firstPt->val = val2;
        lastPt->val = val1;
        return head;
    }
};