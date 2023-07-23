//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int count = 0;
        int total = r*c;
        
        int r_start = 0;
        int c_start = 0;
        int r_end = r-1;
        int c_end = c-1;

        vector<int> ans;

        while (count < total)
        {
            for (int i = c_start; count < total &&  i <=c_end; i++)
            {
                ans.push_back(matrix[r_start][i]);
                count++;
            }

            r_start++;

            for (int i = r_start; count < total && i <=r_end; i++)
            {
                ans.push_back(matrix[i][c_end]);
                count++;
            }

            c_end--;
            
            for (int i = c_end; count < total &&  i >=c_start; i--)
            {
                ans.push_back(matrix[r_end][i]);
                count++;
            }
            r_end--;
            
            for (int i = r_end; count < total &&  i >=r_start; i--)
            {
                ans.push_back(matrix[i][c_start]);
                count++;
            }
            c_start++;

        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends