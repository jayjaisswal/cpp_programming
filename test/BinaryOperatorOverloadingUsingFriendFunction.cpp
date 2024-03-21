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

    friend demo operator +(demo &obj, demo &obj2);
   

    };
    demo operator +(demo &obj, demo &obj2)
     {
       demo temp;
       temp.a = obj.a + obj2.a;
       temp.b = obj.b + obj2.b;
       return temp;
    }

    int main()
    {
        demo  d1(3,-2) ,d2(-9,-9),ob;
        ob=d2+d1;
        ob.show();



         return 0;

    }

   
