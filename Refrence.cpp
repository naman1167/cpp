#include<iostream>
using namespace std;
int main ()
{
    int x=10 ;
    int &a=x;
    cout<<"value of x is "<<x<<endl;
    cout<<"value of a "<<a<<endl;
    x=20;
    cout<<x<<endl;
    cout<<a<<endl;

}
