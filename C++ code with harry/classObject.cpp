#include <iostream>
using namespace std;

// defining class
class Rectangle{
    //by default all these data are public so to access we have to public so
    //Data member
    public:
    int length;
    int breadth;  

    //member function

    void print(){
        cout<<"Length is :"<<length<<endl;
        cout<<"Breadth is :"<<breadth<<endl;
    }
    int area(){
        return length*breadth;
    }


};
int main(){
//creating object
Rectangle r1,r2; // to create object you only need to write class name then take any variable
     r1.length=10;  //no need to declare it here as we have already declare it in class
     r2.length=20;  // To access class we use dot. 
    
    r1.breadth=6;
    r2.breadth=7;

    r1.print();
    r2.print();

    cout<<"The area is r1 is :"<<r1.area()<<endl;
    cout<<"The area is r2 is :"<<r2.area()<<endl;


}