class Solution
{
public:
    int minTime(int n, vector<vector<int>> &edges, vector<bool> &hasApple)
    {
        vector<int> parents(n, 0);
        for (const auto &e : edges)
        {
            parents[e[1]] = e[0];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (hasApple[i])
                hasApple[parents[i]] = true;
        }
        int res = count(hasApple.begin(), hasApple.end(), true);
        return max(0, res * 2 - 2);
    }

    // dfs TLE's

    // int dfs(vector<vector<int>> adj, vector<bool> &hasApple, int cur, int parent)
    // {
    //     int distance = 0;
    //     for (const auto &i : adj[cur])
    //     {
    //         if (i != parent)
    //         {
    //             int temp = dfs(adj, hasApple, i, cur);
    //             if (hasApple[i])
    //             {
    //                 distance += 2 + temp;
    //                 hasApple[cur] = true;
    //             }
    //         }
    //     }
    //     return distance;
    // }

    // int minTime(int n, vector<vector<int>> &edges, vector<bool> &hasApple)
    // {
    //     vector<vector<int>> adj(n);
    //     for (const vector<int> &i : edges)
    //     {
    //         adj[i[0]].push_back(i[1]);
    //         adj[i[1]].push_back(i[0]);
    //     }
    //     return dfs(adj, hasApple, 0, 0);
    // }
};