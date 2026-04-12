#include<bits/stdc++.h>
using namespace std;


// t.c = O(n)
int checkPrime(int n){
   int count=0;
   for(int i=1;i<=n;i++){
    if(n%i==0){
        count++;
    }
   }
   return count == 2;
}

//t.c = O(sqrt(n))
int checkPrime2(int n){
    int count = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i ==0){
            count++;
            if(n/i != i){
                count++;
            }
        }
    }
    return count == 2;
}


int main(){
    int n;
    cout<<"enter a number";
    cin >> n;
    if(checkPrime2(n)){
        cout<<"prime number";
    }
    else{
        cout<<"not prime number";
    }
}