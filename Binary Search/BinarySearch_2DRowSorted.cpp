#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int s = 0;
        int e = row*col -1;
        int mid = s+ (e-s)/2;
        while (s <= e)
        {
            int elem = matrix[mid/col][mid%col];
            if ( elem == target)
            {
                return 1;
            }
            if ( elem < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid -1;
            }
            mid = s+ (s-e)/2;
        }
        return 0;
    }
};