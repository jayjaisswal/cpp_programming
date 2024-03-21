#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x=0,int y = 0)
    {
        a=x;
        b=y;
    }

    void show()
    {
        cout<<"A "<<a<<" , "<<"B "<<b<<endl;
    }

    demo operator-()
    {
        a=-a;
        b=-b;
    }
};
int main()
{
    demo d(8,-9);
    d.show();
    -d;
    d.show();


return 0;
}