#include<bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cout<<"enter a number";
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int rem = n%10;
        sum = sum+ (rem*rem*rem);
        n = n/10;
    }
    if (sum == n)
    {
        cout << "armstrong number";
    }
    else
    {
        cout << "not armstrong number";
    }

}