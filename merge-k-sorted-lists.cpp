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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        return !list1 ? list2 : !list2                
        ? list1 : list1->val < list2->val ? 
        (list1->next = mergeTwoLists(list1->next, list2), list1)
        : (list2->next = mergeTwoLists(list1, list2->next), list2);
    }
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (!lists.size())
            return nullptr;
        int iter = lists.size();
        while (--iter)
        {
            lists[iter - 1] = mergeTwoLists(lists[iter - 1], lists[iter]);
        }
        return lists[0];
    }
};