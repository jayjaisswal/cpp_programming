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
        cout<<a<<"+"<<b<<"i"<<endl;
    }

    demo operator +(demo &obj)
    {
        demo temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }

    };

    int main()
    {
        demo d(8,9) , d1(3,-2) ,d2(-9,-9),ob;
        ob=d+d1+d2;
        ob.show();



         return 0;

    }

   
