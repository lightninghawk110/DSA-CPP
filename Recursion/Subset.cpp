//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void rec_func(vector<int> A,int i,vector<int> output,vector<vector<int> >& ans)
    {
        if(i >= A.size())
        {
            ans.push_back(output);
            return ;
        }
        rec_func(A,i+1,output,ans);
        int elem = A[i];
        output.push_back(elem);
        rec_func(A,i+1,output,ans);
        
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int> > ans;
        vector<int> output;
        int i = 0;
        rec_func(A,i,output,ans);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends