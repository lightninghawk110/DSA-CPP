#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){

    if(i>n){  // base condition
        return;
    }

    f(i+1,n);  //function call, here we are calling the function before printing the value of i, so it will print the value of i in reverse order from n to 1.
    cout << i << endl ; // this will print the value of i after the function call, so it will print the value of i in reverse order from n to 1.


}


int main(){
    int n, i = 1;
    cout << "enter n";
    cin >> n;

    f(i, n);

    return 0;
}