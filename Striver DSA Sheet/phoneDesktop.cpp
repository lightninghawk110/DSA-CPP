#include<bits/stdc++.h>
using namespace std;

int phoneDesktop(int x, int y){
    int screens = (y+1)/2;
    int free = screens*15 - y*4;
    if( x > free){
        screens+= (x-free + 14)/15; 
    }
    return screens;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int x;
        int y;
        cin >> x >> y;
        cout << phoneDesktop(x,y)<< endl;
    }
}