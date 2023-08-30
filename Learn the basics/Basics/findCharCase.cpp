#include <iostream>
using namespace std;
// link https://www.codingninjas.com/studio/problems/find-character-case_58513
int main()
{
    // Write your code here
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << 1;
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        cout << 0;
    }

    else
    {
        cout << -1;
    }
}
