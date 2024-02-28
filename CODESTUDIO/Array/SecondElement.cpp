  #include <bits/stdc++.h>
  using namespace std;
  int secondLargest(int n, vector<int> arr)
    {

    int largest, slargest;
    largest = arr[0];
    slargest=-1;
    for(int i = 1;i<n;i++)
    {
        if(arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i]>slargest)
        {
            slargest = arr[i];
        }
        else{
                continue;
        }
    }
    return slargest;

}
int secondSmallest(int n, vector<int> arr)
    {

    int smallest, ssmallest;
    smallest = arr[0];
    ssmallest=INT_MAX;
    for(int i = 1;i<n;i++)
    {
        if(arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i]<ssmallest)
        {
            ssmallest = arr[i];
        } else {
            continue;
        }
    }
    return ssmallest;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int n1 = secondLargest( n, a);
    int n2 = secondSmallest(n, a);
    vector<int> ans = {n1,n2};
    return ans;
};
