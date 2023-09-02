#include <bits/stdc++.h>

using namespace std;

int main()
{
   
   int P = 10000;
   int t = 7;
   float r = 6.25;
   int n = 4;
   float  A = P* pow((1+(r/(n*100))),(n*t));
    cout << A << endl;
    return 0;
}