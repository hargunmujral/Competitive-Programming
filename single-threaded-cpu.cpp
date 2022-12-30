class Solution
{
public:
    vector<int> getOrder(vector<vector<int>> &tasks)
    {
        int time = 0, i = 0, n = tasks.size();
        vector<int> res;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        for (int i = 0; i < n; i++)
        {
            tasks[i].push_back(i);
        }
        sort(tasks.begin(), tasks.end());

        while (i < n || pq.size())
        {
            if (!pq.size())
                time = max(time, tasks[i][0]);
            while (i < n && time >= tasks[i][0])
            {
                pq.push({tasks[i][1], tasks[i][2]});
                i++;
            }
            time += pq.top().first;
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
