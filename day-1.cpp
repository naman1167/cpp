#include <iostream>
using namespace std;

// int main  (){
//     int a = 10 ;
//     int b = 5 ;
//     a = a+b ;
//     b = a- b ;
//     a = a -b ;
//     cout<<" Value of a: "<<a<<endl; 




    int main(){
    int x;
    int y;
    cout<<"enter the the no 1 :"<<endl; 
    cin>>x;
    cout<<"Enter the second no. :"<<endl; 
    cin>>y;
    int c=x;
    x=y;
    y=c;
    return 0; 
    cout<<x<<endl<<y;
}




int main(){
    int x;
    int y;
    cout<<"enter the the no 1 :";
    cin>>x;
    cout<<"Enter the second no. :";
    cin>>y;
    int c=x+y;
    cout <<"the addition is :"<< c;
    return 0;
}