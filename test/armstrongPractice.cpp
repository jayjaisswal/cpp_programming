#include<iostream>
using namespace std;
int main()
{   //4 digit armstrong number-->153
    int c,n,r,arm=0;
    cout<<"enter an integer"<<endl;
    cin>>n;
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r*r)+arm;
        n=n/10;
        
    }
    if(c==arm)
    {
        cout<<"armstrong Number"<<endl;
    }
    else{
        cout<<"not armstrong number";
    }


return 0;
}