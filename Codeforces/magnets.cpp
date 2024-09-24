#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char arr[100000][3]; // To store strings "01" or "10"
    int count = 1; // At least one group exists

    // Read the input strings
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Count groups
    for (int i = 1; i < n; i++) {
        if (strcmp(arr[i], arr[i - 1]) != 0) {
            count++; // New group if current magnet differs from the previous one
        }
    }

    printf("%d\n", count);

    return 0;
}
