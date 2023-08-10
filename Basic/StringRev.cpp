#include <bits/stdc++.h> 
using namespace std;
string stringReverse(string S) {
    int i = 0;
    int n;
    n = S.length();
    int j = n-1;
    while(i<j){
        swap (S[i],S[j]);
        i++;
        j--;
    }
    return S;
  
}