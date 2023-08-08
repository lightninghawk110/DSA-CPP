//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void solve(int N,int a[],vector<string> & ans,string output, int index, string mapping[])
    {
        if(index == N)
        {
            ans.push_back(output);
            return ;
        }
        string letter = mapping[a[index]];
            for(int k=0;k<letter.length();k++)
            {
                output.push_back(letter[k]);
                solve(N,a,ans,output,index+1,mapping);
                output.pop_back();
            }
        
        }
        
        

    vector<string>possibleWords(int a[], int N)
    {
        string output = "";
        vector<string> ans;
        if (N == 0)
            return ans;
        int i = 0;
        string mapping[10] = {"","", "abc","def", "ghi","jkl", "mno","pqrs","tuv","wxyz"};
        solve(N,a,ans,output,i,mapping);
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends