#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    int mini = prices[0], profit = 0;
    int n = prices.size();
    for(int i=1;i<n;i++)
    {
       int  cost = prices[i]-mini;
        profit = max(profit,cost);
        mini = min(mini,prices[i]);
    }

    return profit;

}