//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity2(vector<vector<int> > & M,int n)
    {
        stack<int>s;
       
       for(int i=0;i<n;i++)
        s.push(i);
        
        while(s.size()>=2){
            int p=s.top();
            s.pop();
            int q=s.top();
            s.pop();
            
            if(M[p][q]==0)
             s.push(p);
             
             else
              s.push(q);
        }
        
        int t=s.top();
        
        for(int i=0;i<n;i++){
            if(i!=t){
                 if(M[i][t]==0 || M[t][i]==1)
                 return -1;
            }
        }
     return t;

    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
         int start=0,end=n-1;
    
    while(start < end){
        
        if(M[start][end]==1) start++;
        
        else end--;
    }
    
        for(int i=0;i<n;i++){
            if(i!=start){
                 if(M[i][start]==0 || M[start][i]==1)
                 return -1;
            }
        }
    return start;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends



