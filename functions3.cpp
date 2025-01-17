// Function called by values
#include <iostream>
using namespace std ;

// void display (int a)
// {
//     int c = a+10 ;
//     cout<<"The Value of a"<<c;

// }
// int main ()
// {
//     int x = 10 ;
//     display(x);
  
// }

//  called by reference


void display (int & a)
{
    int c = a+10 ;
    cout<<"value of c is : "<<c;
}
int main ()
{
    int x =10 ;
    display(x);
    return 0  ;
}













