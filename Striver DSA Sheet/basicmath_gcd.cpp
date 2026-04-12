#include<bits/stdc++.h>
using namespace std;



//t.c = O(min(a,b))
int gcd(int a, int b){
        int gcd = 1;
        for (int i = 1; i<= min(a,b); i++)
        {
            if (a%i ==0 && b%i == 0){
                gcd = i;
            }
        }
        return gcd;

}


//otherway, gives less t.c for most of cases but t.c will be O(min(a,b)) for some cases like when a and b are prime numbers.

int gcd2(int a, int b){
    int gcd = 1;
    for(int i = min(a,b); i>=1; i--){
        if (a%i ==0 && b%i == 0){
            gcd = i;
            break;
        }
    }
    return gcd;
}


//Euclidean algorithm = gcd of (n1,n2) = gcd of (n1-n2, n2) if n1>n2

//t.c = O(log(min(a,b)))

int gcd3(int a,int b){
    while(a > 0 && b > 0){
        if (a> b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    if (a == 0){
        return b;
    }
    return a;
}

int main(){
    int n1,n2;
    cout <<"enter two numbers";
    cin >> n1 >> n2;
    cout << gcd3(n1,n2) << endl;
}