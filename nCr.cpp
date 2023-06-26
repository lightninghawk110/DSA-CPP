#include<iostream>
using namespace std;

int fact( int num)
{
    int fact = 1;
    for (int  i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
    
}


int ncr (int n, int r)
{
    int result = 0;
    result = fact(n)/ (fact(r) * fact(n - r));
    return result;
}
int main()
{
    int f ;
    f = ncr(8,2);
    cout << f << endl;
}

