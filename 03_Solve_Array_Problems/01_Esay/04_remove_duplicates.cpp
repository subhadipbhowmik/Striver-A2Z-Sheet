#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int n = arr.size();

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int newLength = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
