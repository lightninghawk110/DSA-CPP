#include <bits/stdc++.h>
const int MAX = 100;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void printPrincipalDiagonal(int mat[][MAX], int n)
{
    cout << "Principal Diagonal: ";
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
            // Condition for principal diagonal
            if (i == j)
                cout << mat[i][j] << ", "; //! here
        }
    }
    cout << endl;
}
 
// Function to print the Secondary Diagonal
void printSecondaryDiagonal(int mat[][MAX], int n)
{
    cout << "Secondary Diagonal: ";
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
            // Condition for secondary diagonal
            if ((i + j) == (n - 1)) //! here
                cout << mat[i][j] << ", ";
        }
    }
    cout << endl;
}
int main()
{
    fastio;
    // code goes here
    return 0;
}