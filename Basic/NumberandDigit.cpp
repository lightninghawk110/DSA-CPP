#include <bits/stdc++.h>
using namespace std; 
int countD (int n)
{
    int d,Sum=0;
    while ( n > 0)
    {
        d = n%10;
        Sum+=d;
        n=n/10;

    }
    return Sum;
}

vector<int> numbersAndDigits(int n) 
{

    int d,num,i;
    num = n;
    vector<int> v;
    for(i=1;i<num;i++){
    int sum = 0;
    sum = countD(i);
    int valid = sum + i;
    if (valid == n) {
      v.push_back(i);
    }
    }
    return v;
}



int main()
{
    int n = 8;
    vector<int> v;
    v = numbersAndDigits(n);
    for (int i = 0; i< v.size(); i++)
    {
        cout << v[i];
    }
    
}