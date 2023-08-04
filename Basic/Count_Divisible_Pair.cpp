#include<bits/stdc++.h>
using namespace std;

int countOfDivisiblePairs(int n, int m) {
  int count = 0, x = 1, y = 1;
  for (int x=1; x<=n;x++) {
	  for (int y=1; y<=m;y++) {
    if ((x + y) % 5 == 0) {
			count++;
      }
    }
  }
  return count;
}

int main()
{
    cout << "ans:" << countOfDivisiblePairs(6,12);
}