class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        unordered_set<ListNode *> set;
        while (head != nullptr)
        {
            if (set.count(head))
                return head;
            set.insert(head);
            head = head->next;
        }
        return nullptr;
    }
    ListNode *detectCycleMemoryOptimized(ListNode *head)
    {
        while (head != nullptr)
        {
            if (head->val == INT_MAX)
                return head;
            head->val = INT_MAX;
            head = head->next;
        }
        return nullptr;
    }

};