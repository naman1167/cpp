//    user input function 

#include<iostream>
using namespace std ;

void display (int a );

int main ()
{
    int x ;
    cout<<"Entr the value for a :";
    cin>>x;
    // int x =10; // variable // actual parameter
    display(x);
    return 0 ;

}

void display (int a )
{
    cout<<"The value of a "<<a;
}