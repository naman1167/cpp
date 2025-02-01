#include <iostream>
#include <string>
using namespace std ;

int main (){
    string ARR [] ={"Namaan","Sethi","Piyush","sethi"};

    for (int i = 0; i < 4; i++)
    {
        /* code */
        // cout<<ARR[i]<<endl; // Array with LOPPS

        cout<<i<<" = "<<ARR[i]<<endl;
    }

    cout<<sizeof(ARR)<<endl;
    


    
    return 0 ;
}