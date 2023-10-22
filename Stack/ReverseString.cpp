#include<iostream>
#include<stack>
using namespace std;


int main()
{
    string s = "love";
    stack<char> c;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        c.push(ch);
    }
    while (!c.empty())
    {
        char ch = c.top();
        ans.push_back(ch); /// adding char to string
        c.pop();

    }
    cout << "ans is :" << ans << endl;
    
    return 0;
}