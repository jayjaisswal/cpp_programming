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

    //constructor
    //IT DOESN'T have data type
    //To declare we need to write class name then ()
    //non parameterised constructor
    Rectangle(){
        length = 0;
        breadth = 0;
    }
    //parameterised constructor
    Rectangle(int l, int b){
        setLength(l);
        setBreadth(b);
        
    }

    //copy constructor

    Rectangle(Rectangle &rect){
        length= rect.length;
        breadth= rect.breadth;


    }
     int area();
     int perimeter();
    
    


};
 
int Rectangle::perimeter(){
    return 2*(length+breadth);
}


int main(){


     
      //constructor access
      //Accrssing Non Parameterised constructor
    //  Rectangle r;
    //  cout<<r.area();

      //Accessing parameterised constructor
        //   Rectangle r(10,5);
        //   cout<<r.area();
     
      // Accessing copy constructor
          Rectangle r(10,5);
          Rectangle r2(r);
          cout<<r2.area()<<endl;
          cout<<r2.perimeter();



}


//we can also define this function outside the main
//that is before main or after the main
int Rectangle::area(){
    return length*breadth;
}