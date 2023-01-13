#include <bits/stdc++.h>

class Solution
{
public:
    vector<vector<int>> cxns;
    int res = 1;
    int dfs(string &s, int node, int parent)
    {
        int output = 1;
        for (const auto &p : cxns[node])
        {
            if (p != parent)
            {
                int path = dfs(s, p, node);
                if (s[p] != s[node])
                {
                    res = max(res, output + path);
                    output = max(output, 1 + path);
                }
            }
        }
        // if (parent != -1 && s[parent] != s[node])
        //     lengths[parent]++;
        // else if (parent != 1 && s[parent] == s[node])
        //     lengths[parent] = 1;
        return output;
    }

    // int dfs(string& s, int node) {
    //     vector<int> validPaths;
    //     for(const auto& p : cxns[node]){
    //         int path = dfs(s, p);
    //         if(s[p] != s[node]) validPaths.push_back(1 + path);
    //         else res = max(res, path)
    //     }
    // }

    int longestPath(vector<int> &parent, string s)
    {
        cxns.resize(parent.size());
        for (int i = 0; i < parent.size(); i++)
        {
            if (parent[i] != -1)
            {
                cxns[i].push_back(parent[i]);
                cxns[parent[i]].push_back(i);
            }
        }
        // vector<int> lengths(parent.size(), 1);
        // dfs(lengths, 0, 0, s);
        // int res = lengths[0];
        // for (int i = 0; i < lengths.size(); i++)
        // {
        //     if (lengths[i] > res)
        //         res = lengths[i];
        // }
        // return res;
        // int dfsstep = dfs(s, 0);
        dfs(s, 0, -1);
        return res;
    }
};