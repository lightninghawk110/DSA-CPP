#include <iostream>
using namespace std;


int loveStory(){

string s("codeforces"); //can be written as string s = "codeforces"
    string str;
    short count =0;
    cin >> str;
    for (short i = 0; i < str.length(); i++)
    {
        if (str[i] != s[i]){
            count++;
        }
    }

    
    return count;
}

int main(int argc, char const *argv[])
{
    short n;
    scanf("%hd", &n);
    for (short i = 0; i < n; i++)
    {
        cout << loveStory() << endl;
    }
    
}