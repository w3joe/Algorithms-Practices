#include <iostream>
#include <vector>

using namespace std;
int minCostClimbingStairs(vector<int> &cost);
int main()
{
    int costLength;
    vector<int> cost;
    cin >> costLength;
    for (int i = 0; i < costLength; i++)
    {
        int input;
        cin >> input;
        cost.push_back(input);
    }
    cout << minCostClimbingStairs(cost);
    return 0;
}

int minCostClimbingStairs(vector<int> &cost)
{
    for (int i = cost.size() - 3; i > ~i; i--)
        cost[i] += min(cost[i + 1], cost[i + 2]);

    return min(cost[0], cost[1]);
}