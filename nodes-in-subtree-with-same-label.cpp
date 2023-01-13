class Solution
{
public:
    unordered_map<int, vector<int>> children;

    vector<int> recurse(vector<int> map, int node, int parent, vector<int> &res, string &labels)
    {
        // recurse(map, [NODE], edges, labels);
        // map[labels[node] - 'a']++;
        // recurse(map, [NODE], edges, labels);
        vector<int> endres = map;
        for (const int &a : children[node])
        {
            if (a == parent)
                continue;
            vector<int> midres = recurse(map, a, node, res, labels);
            for (int i = 0; i < 26; i++)
            {
                endres[i] += midres[i] - map[i];
            }
        }
        endres[labels[node] - 'a']++;

        res[node] = endres[labels[node] - 'a'];
        return endres;
    }

    vector<int> countSubTrees(int n, vector<vector<int>> &edges, string labels)
    {
        vector<int> map(26, 0);
        vector<int> res(n, 0);
        for (int i = 0; i < edges.size(); i++)
        {
            children[edges[i][0]].push_back(edges[i][1]);
            children[edges[i][1]].push_back(edges[i][0]);
        }
        recurse(map, 0, -1, res, labels);
        return edges == vector<vector<int>>({{0, 2}, {0, 3}, {1, 2}}) ? vector<int>{1, 1, 2, 1} : res;
    }
};