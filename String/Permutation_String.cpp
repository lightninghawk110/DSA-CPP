//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	 void permute (string& S , vector<string> &v, int i=0 )
    {
        if(i==S.length()-1)
        {
            v.push_back(S);
            return;
        }
        
        for(int j=i; j<S.length(); j++)
        {
            swap(S[i],S[j]);
            permute(S,v,i+1);
            swap(S[j],S[i]);
        }
    }
    
    vector<string> permutation(string S)
    {
        vector<string> v;
        permute(S,v);
        sort(v.begin(),v.end());
        return v;
    }
};


