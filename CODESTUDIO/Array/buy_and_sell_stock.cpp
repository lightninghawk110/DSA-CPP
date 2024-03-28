#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini = prices[0], profit = 0;
    int n = prices.size();
    for(int i=1;i<n;i++)
    {
        cost = a[i]-mini;
        profit = max(profit,cost);
        mini = min(mini,price[i]);
    }

    return profit;

}