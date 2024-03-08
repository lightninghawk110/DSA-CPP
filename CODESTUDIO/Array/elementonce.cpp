#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
		    
		int x = 0;
		int N = arr.size();
	    for(int i=0;i<N;i++)
	    {
	        x= x^arr[i];
	    }
	    
	    return x;	
}