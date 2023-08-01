#include<bits/stdc++.h>
using namespace std; 
string convertString(string str) 
{
		str[0] = toupper(str[0]);
		for(int i=0; i < str.length();i++)
    {
        if (str[i] == ' ')
        {
            str[i+1] = toupper(str[i+1]);
        }
    }
    return str;
}
int main()
{
    string s;
    s = "hello world";
    string r;
    r = convertString(s);
    cout << r << endl;

}