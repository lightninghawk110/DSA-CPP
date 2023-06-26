#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    int klengthpref(string arr[], int n, int k, string str)
    {
        string s = str.substr(0, k);
        if (str.length() < k)
            return 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].substr(0, k) == s)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    string arr[] = {"abba", "abbb", "abbc", "abbd",
                    "abaa", "abca"};
    cout << (s.klengthpref(arr, 6, 3, "abbg")) << endl;
}