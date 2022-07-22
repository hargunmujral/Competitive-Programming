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
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *left = new ListNode(0);
        ListNode *right = new ListNode(0);
        ListNode *startLeft = left;
        ListNode *startRight = right;

        while (head)
        {
            if (head->val < x)
            {

                left->next = head;
                left = left->next;
            }
            else
            {
                right->next = head;
                right = right->next;
            }
            head = head->next;
        }
        right->next = nullptr;
        left->next = startRight->next;
        return startLeft->next;
    }
};