#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of rows" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) // top to bottom kha tk jana hh wo 'i' btayega
    {
        for (int j = 1; j <= n; j++) // left se right kha tk jana hh 'j' btayega
        {
            if (j <= i) // 'i' aur 'j' me wo relation find kro jisse jha * chaho print ho jaye
            {
                cout << "*";
            }
            else
                cout << " "; // jha star nhi chahiye wha space print hoga
        }
        cout << endl;// 'i' ka hh ye -->line ko change krne ke liye
    }

    return 0;
}