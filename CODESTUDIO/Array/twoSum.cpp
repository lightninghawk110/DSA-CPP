#include<bits/stdc++.h>
using namespace std;
string read(int n, vector<int> book, int target)
{
    
    int sum=0;
    sort(book.begin(),book.end());
    int i=0;
    int j=n-1;
    while(i<j)
    {
        sum=book[i]+book[j];
        if(sum==target)
            return "YES";
        else if (sum < target)
            i++;
        else
            j--;
    }
    return "NO";

}