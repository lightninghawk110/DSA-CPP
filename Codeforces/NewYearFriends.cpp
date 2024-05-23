#include <bits/stdc++.h>
using namespace std;

int findGreatest(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}

// Function to find the smallest of three numbers
int findSmallest(int num1, int num2, int num3) {
    if (num1 <= num2 && num1 <= num3) {
        return num1;
    } else if (num2 <= num1 && num2 <= num3) {
        return num2;
    } else {
        return num3;
    }
}

int newYear () {
    int x,y,z;
    cin>>x>>y>>z;
return findGreatest(x,y,z) - findSmallest(x,y,z);
}

int main()
{
    
	int t;
    int ans;
	cin>>t;
	while(t--)
	{
	ans = newYear();
    cout<<ans;
 
	}
}