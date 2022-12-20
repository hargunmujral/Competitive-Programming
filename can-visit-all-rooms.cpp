class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        set<int> visited;
        visitRoom(rooms, visited, 0);
        cout << visited.size();
        return visited.size() == rooms.size();
    }
    void visitRoom(vector<vector<int>> &rooms, set<int> &visited, int check)
    {
        if (visited.count(check))
            return;
        visited.insert(check);
        for (int i = 0; i < rooms[check].size(); i++)
        {
            visitRoom(rooms, visited, rooms[check][i]);
        }
        return;
    }
};