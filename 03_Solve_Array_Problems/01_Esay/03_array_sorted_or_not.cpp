#include <iostream>

int arraySortedOrNot(int arr[], int n)
{
    // if (n == 1 || n == 0)
    //     return 1;

    // if (arr[n - 1] < arr[n - 2])
    //     return 0;

    // return arraySortedOrNot(arr, n - 1);

    if (n <= 1)
    {
        return 1;
    }

    bool increasing = arr[0] < arr[1];

    for (int i = 1; i < n - 1; i++)
    {
        if ((arr[i] < arr[i + 1] && !increasing) || (arr[i] > arr[i + 1] && increasing))
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = arraySortedOrNot(arr, n);

    if (result)
        std::cout << "The array is sorted.\n";
    else
        std::cout << "The array is not sorted.\n";

    return 0;
}
