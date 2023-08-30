#include <bits/stdc++.h>
using namespace std;

// https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156
int solve(int n)
{
    if (n == 1)
    {
        return 1;
    }

    else if (n == 2)
    {
        return 1;
    }

    else
    {
        return solve(n - 1) + solve(n - 2);
    }
}

int main()
{
    int num;
    cin >> num;
    cout << solve(num);
}
