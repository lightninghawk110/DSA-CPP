#include <iostream>
using namespace std;

int largestElement(int arr[], int size)
{

    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}

int main(int argc, char const *argv[])
{

    int arr[5] = {99, 56, 54, 25, 86};
    int n = 5;
    cout << largestElement(arr, n);

    return 0;
}
