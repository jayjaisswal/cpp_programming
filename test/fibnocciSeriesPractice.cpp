#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, n;
    cout << "enter number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << a;  //zero se start hoga series to a ko print krana hoga
        c = a + b;  // c me hmne sum store kiya hh jo b ko assign kr dnge
        a = b;  //b wala jo h ushko a me assign kr dnge
        b = c;
    }

    return 0;
}