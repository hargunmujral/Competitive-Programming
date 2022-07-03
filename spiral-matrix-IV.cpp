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
    void leftIter(int length, vector<vector<int>> &matrix, pair<int, int> &pos, ListNode *&cur)
    {
        for (int i = 0; i < length; i++)
        {
            if (!cur)
                return;
            matrix[pos.first][pos.second - i] = cur->val;
            cur = cur->next;
        }
        pos.second -= length - 1;
        pos.first--;
    }
    void rightIter(int length, vector<vector<int>> &matrix, pair<int, int> &pos, ListNode *&cur)
    {
        for (int i = 0; i < length; i++)
        {
            if (!cur)
                return;
            matrix[pos.first][pos.second + i] = cur->val;
            cur = cur->next;
        }
        pos.second += length - 1;
        pos.first++;
    }
    void upIter(int length, vector<vector<int>> &matrix, pair<int, int> &pos, ListNode *&cur)
    {
        for (int i = 0; i < length; i++)
        {
            if (!cur)
                return;
            matrix[pos.first - i][pos.second] = cur->val;
            cur = cur->next;
        }
        pos.first -= length - 1;
        pos.second++;
    }
    void downIter(int length, vector<vector<int>> &matrix, pair<int, int> &pos, ListNode *&cur)
    {
        for (int i = 0; i < length; i++)
        {
            if (!cur)
                return;
            matrix[pos.first + i][pos.second] = cur->val;
            cur = cur->next;
        }
        pos.first += length - 1;
        pos.second--;
    }
    vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
    {
        vector<vector<int>> matrix(m, vector<int>(n, -1));
        pair<int, int> pos(0, 0);
        ListNode *cur = head;
        while (cur)
        {
            rightIter(n--, matrix, pos, cur);

            downIter(--m, matrix, pos, cur);

            leftIter(n--, matrix, pos, cur);

            upIter(--m, matrix, pos, cur);
        }
        return matrix;
    }
};