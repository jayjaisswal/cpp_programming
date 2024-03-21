#include<iostream>
using namespace std;
int main()
{
    int count=0 ,n;
    cout<<"enter Number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"prime";
    }
    else
    cout<<"Not Prime"<<endl;



return 0;
}