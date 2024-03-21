#include <iostream>
using namespace std;
class A
{
public:
    virtual void show()=0;
    // {
    //     cout << "\nBase class";
    // }
};
    class B : public A
    {
    public:
        void show()
        {
            cout << "\nDerived class";
        }
    };
    int main()
  { 
    A *bptr;
    B bb;   //access base class
    bptr = &bb;
    bptr->show();

    //  A aa;   //access base class
    B aa;
    bptr = &aa;
    bptr->show();


    return 0;
}