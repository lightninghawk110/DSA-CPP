//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



bool valid(string s)
{
    stack<char> stk;
    for (int i = 0; i < s.length();i++)
    {
        char ch = s[i];
        
        if (ch== '[' || ch=='{' || ch=='(')
        {
            stk.push(ch);
        }
        else
        {
            if (!stk.empty())
            {
                char top = stk.top();
                if ( (ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if(stk.empty())
        return true;
    else
        return false;
}
