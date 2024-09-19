#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        unordered_map<int, int> freq;
        vector<int> index(n + 1, -1);  // To track the first occurrence (1-based index)
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
            if (index[a[i]] == -1) {
                index[a[i]] = i + 1;  // Store the 1-based index
            }
        }
        
        int min_unique = INT_MAX;
        int result = -1;
        
        // Find the smallest unique number
        for (int i = 0; i < n; i++) {
            if (freq[a[i]] == 1 && a[i] < min_unique) {
                min_unique = a[i];
                result = index[a[i]];
            }
        }
        
        cout << result << endl;
    }

    return 0;
}
