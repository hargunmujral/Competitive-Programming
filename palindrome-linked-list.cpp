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
    ListNode *temp;
    bool check(ListNode *head)
    {
        if (head == nullptr)
            return true;
        bool ans = check(head->next) && temp->val == head->val;
        temp = temp->next;
        return ans;
    }
    bool isPalindrome(ListNode *head)
    {
        temp = head;
        return check(head);
    }
};