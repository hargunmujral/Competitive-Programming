#include <bits/stdc++.h>

class Solution
{
public:
    // int res = 1;
    // vector<int> dfs(int node, int parent)
    // {
    //     vector<int> output;
    //     for (const auto &p : cxns[node])
    //     {
    //         if (p != parent)
    //         {

    //         }
    //     }
    //     return output;
    // }

    // int numberOfGoodPaths(vector<int> &vals, vector<vector<int>> &edges)
    // {
    //     res = vals.size();
    //     vector<vector<int>> cxns(vals.size());
    //     for (const auto& e : edges)
    //     {
    //         cxns[e[0]].push_back(e[1]);
    //         cxns[e[1]].push_back(e[0]);
    //     }
    //     dfs(0, -1);
    //     return res;
    // }

    int search(vector<int> &v, int i)
    {
        if (i == v[i])
            return i;
        v[i] = search(v, v[i]);
        return v[i];
    }

    int numberOfGoodPaths(vector<int> &vals, vector<vector<int>> &edges)
    {
        int res = vals.size();
        vector<vector<int>> valmap(res);
        vector<int> temp(res);
        for (int i = 0; i < res; i++)
        {
            temp[i] = i;
            valmap[i] = {vals[i], 1};
        }
        sort(edges.begin(), edges.end(), [&](vector<int> &a, vector<int> &b)
             { return max(vals[a[0]], vals[a[1]]) < max(vals[b[0]], vals[b[1]]); });
        for (int i = 0; i < edges.size(); i++)
        {
            int s0 = search(temp, edges[i][0]);
            int s1 = search(temp, edges[i][1]);
            if (valmap[s0][0] != valmap[s1][0])
            {
                if (valmap[s0][0] > valmap[s1][0])
                    temp[s1] = s0;
                else
                    temp[s0] = s1;
            }
            else
            {
                temp[s0] = s1;
                res += valmap[s0][1] * valmap[s1][1];
                valmap[s1][1] += valmap[s0][1];
            }
        }
        return res;
    }
};
