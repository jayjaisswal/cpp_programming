#include <iostream>
using namespace std;
int main()
{
    int c, n, r, s = 0;
    cout << "enter no." << endl;
    cin >> n;
    c=n;
    while (n > 0)
    {
        r = n % 10;
        s = r + (s * 10);
        n = n / 10;
    }
    if (c == s)
    {
        cout << "palindrome number";
    }
    else
    {
        cout << "Not a palindrome number ";
    }

    return 0;
}