#include <bits/stdc++.h> 
using namespace std;
vector<int> rotateArray(vector<int>& arr, int n) {
    vector<int> arr_temp(n);
        for (int i=0;i<n;i++)
        {
            arr_temp[i] = arr[(i+1) % n];    // 0 (arr_temp) <- 2 (arr) , 1 -< 3 , 2 <- 4, 3 <- 0, 4 <- 1  
        }
        for(int i=0;i<n;i++)
        {
        arr[i] = arr_temp[i]; //copying from arr_temp to arr[i];
        }
        return arr_temp;
    }