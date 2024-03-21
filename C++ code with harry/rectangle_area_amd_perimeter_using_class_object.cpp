#include<iostream>
using namespace std;
class Rectangle

{  
    public:
    double length;
    double breadth;
    double perimeter(){
        return 2*(length+breadth);
    }
   double area (){
        return (length*breadth);
    }

};
int main()
{
    Rectangle r1,r2;
    cout<<"Enter the Length of r1 "<<endl;
    cin>>r1.length;
    cout<<"Enter the Breadth of r1 "<<endl;
    cin>>r1.breadth;
    cout<<"Enter the Length of r2 "<<endl;
    cin>>r2.length;
    cout<<"Enter the Length of r2 "<<endl;
    cin>>r2.breadth;
    cout<<"the perimeter of r1 is "<<r1.perimeter()<<endl;
    cout<<"the perimeter of r2 is "<<r2.perimeter()<<endl;

    cout<<"the area of r1 is "<<r1.area()<<endl;
    cout<<"the area of r2 is "<<r2.area()<<endl;



    return 0;
  
}