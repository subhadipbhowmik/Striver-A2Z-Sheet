#include <bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n)
{
    // Write your code here.
    vector<int> temp;
    for (int i = 1; i < n; i++)
    {
        temp.push_back(arr[i]);
    }
    temp.push_back(arr[0]);
    return temp;
}
