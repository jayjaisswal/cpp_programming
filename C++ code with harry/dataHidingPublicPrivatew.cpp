#include <iostream>
using namespace std;

// defining class
class Rectangle{
    //by default all these data are public so to access we have to public so
    //Data member
    //here i will keep data member privaTE
    private:
    int length;
    int breadth;  

    //member function
    public:
    void print(){
        cout<<"Length is :"<<length<<endl;
        cout<<"Breadth is :"<<breadth<<endl;
    }
    int area(){
        return length*breadth;
    }

    //to access private data member we need to make member function and 
    //through this member function we acess the private data member

    void setLength(int l)
    {
        if(l>=0)
        length = l;
        else
        length = 0;
    }
    void setBreadth(int b)
    {
        if(b>=0)
        breadth = b;
        else
        breadth = 0;
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }



};

int main(){
//creating object
Rectangle r1,r2; // to create object you only need to write class name then take any variable
     r1.setLength(10);  //no need to declare it here as we have already declare it in class
     r2.setLength(50);  // To access class we use dot. 
    
    r1.setBreadth(9);
    r2.setBreadth(7);

    r1.print();
    r2.print();

    cout<<"The area is r1 is :"<<r1.area()<<endl;
    cout<<"The area is r2 is :"<<r2.area()<<endl;


}