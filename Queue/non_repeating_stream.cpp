
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class Solution {
	public:
		string FirstNonRepeating(string s){
		    int n = s.length(), j = 0;
		    int cnt[26] = {0};
		    string ans;
		    for(int i = 0; i < n; i++){
		        int ch = s[i] - 'a';
		        cnt[ch]++;
		        while(j <= i && cnt[s[j] - 'a'] > 1)
		            j++;
		        
		        if(j > i)
		            ans += '#';
		        else 
		            ans += s[j];
		    }
		    return ans;
		}
};