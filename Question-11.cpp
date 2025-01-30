#include <iostream>
#include <string>
using namespace std ;

int main (){

    string Str = "Helloo World!!!!!!" ;
    cout<<"The concatinated String is and the first letter is"<<Str[0]<<endl;
    cout<<"The length of The String is "<<Str.length()<<endl;
    reverse(Str.begin(), Str.end());
    cout<<"The Reverse of The String is " <<Str<<endl;





}