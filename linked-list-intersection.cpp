/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    // Non Optimal Way
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> listA;
        ListNode* A = headA;
        ListNode* B = headB;
        while(A){
            listA.push_back(A);
            A = A->next;
        }
        while(B){
            if( count(listA.begin(), listA.end(), B)) return B;
            B = B->next;
        }
        return nullptr;
    }
    // Better Algorithm
    ListNode *getIntersectionNodeOptimized(ListNode *headA, ListNode *headB)
    {
        ListNode *A = headA;
        ListNode *B = headB;
        while (A && B && A != B)
        {
            A = A->next;
            B = B->next;

            if (A == B)
                return A;
            if (!A)
                A = headB;
            if (!B)
                B = headA;
        }
        return A;
    }
};