// #include <iostream>
// using namespace std ;
// int main ()
// {
//     int x=10 ;  // orignal varaiable 
//     int *ptr=&x ;  // variable ka address declare and define dono ik sath he kar rahe h   
//     /// * -- Dereference Operator...
//     cout<<"The value of x is : "<<x<<endl;
//     cout<<"The Adresss of x is : "<<&x<<endl;
//     cout<<"The  Access value of x is : "<<*ptr;

// }



#include <iostream>
using namespace std;

void display(int *a)
{
    cout<<"Value of a is "<<*a;

}
int main ()
{
    int num =10 ;
    display(&num);
    return 0 ;
}



