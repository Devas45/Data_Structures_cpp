#include <iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time)
    {
        static int sum_c = 0, sum_t = 0;
        int min = 0;
        for (int i = 0; i < cost.size(); i++)
        {
            if (cost[i] < cost[min]) { min = i; }
            else if (cost[i] == cost[min] && time[i] > time[min]) { min = i; }
        }

        sum_c += cost[min];
        sum_t += time[min];
        cost.erase(cost.begin() + min);
        time.erase(time.begin() + min);

        // Base Condition
        if (sum_t >= time.size() || time.size() == 0)
        {
            return sum_c;
        }
        return paintWalls(cost, time);
    }
};

int main() {
    std::vector<int> cost = {2,3,4,2};
    std::vector<int> time = {1,1,1,1};
    int size = 4;
    // cin>>size;

    // for(int i= 0;i < size;i++)
    // {
    //     cin>>cost[i];
    //     cost.push_back(cost[i]);
    // }
    // for(int i= 0;i < size;i++)
    // {
    //     cin>>time[i];
    //     time.push_back(time[i]);
    // }
    Solution solution;
    int result = solution.paintWalls(cost, time);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
