class Solution
{
public:
    bool isRectangleCover(vector<vector<int>> &rectangles)
    {
        int not_two = 0;
        map<pair<int, int>, int> corners;
        for (const auto &rect : rectangles)
        {
            corners[{rect[0], rect[1]}]++;
            corners[{rect[2], rect[3]}]++;
            corners[{rect[0], rect[3]}]--;
            corners[{rect[2], rect[1]}]--;
        }
        for (const auto &item : corners)
        {
            not_two += (item.second != 0);
            if ((item.second != 0) && abs(item.second) != 1)
                return false;
        }
        return not_two == 4;

        //     int min_x = INT_MAX;
        //     int max_x = INT_MIN;
        //     int min_y = INT_MAX;
        //     int max_y = INT_MIN;
        //     unordered_map<int, int> y_coords;
        //     unordered_map<int, int> x_coords;
        //     for (const auto &rect : rectangles)
        //     {
        //         min_x = min(min_x, rect[0]);
        //         min_x = min(min_x, rect[2]);
        //         max_x = max(max_x, rect[0]);
        //         max_x = max(max_x, rect[2]);

        //         min_y = min(min_y, rect[1]);
        //         min_y = min(min_y, rect[3]);
        //         max_y = max(min_y, rect[1]);
        //         max_y = max(min_y, rect[3]);
        //         // if(rect[0] < min_x) min_x = rect[0];
        //         // else if(rect[0] > max_x) max_x = rect[0];
        //         // if (rect[1] < min_y) min_y = rect[1];
        //         // if(rect[1] > max_y) max_y = rect[1];
        //         y_coords[rect[1]]++;
        //         y_coords[rect[3]]++;
        //         x_coords[rect[0]]++;
        //         x_coords[rect[2]]++;
        //     }
        //     cout << min_x << endl;
        //     cout << max_x << endl;
        //     cout << min_y << endl;
        //     cout << max_y << endl;

        //     for (const auto &pair : y_coords)
        //     {
        //         if (pair.first != min_y && pair.first != max_y)
        //         {
        //             if (pair.second < 2)
        //                 return false;
        //         }
        //     }
        //     for (const auto &pair : x_coords)
        //     {
        //         if (pair.first != min_x && pair.first != max_x)
        //         {
        //             if (pair.second < 2)
        //                 return false;
        //         }
        //     }
        //     return true;
    }
};