#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    int oddSum = 0, evenSum = 0, num;
    cin >> num;

    int digit;

    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 == 0)
        {
            oddSum = oddSum + digit;
        }

        else
        {
            evenSum = evenSum + digit;
        }

        num = num / 10;
    }

    cout << oddSum << " " << evenSum;
}
