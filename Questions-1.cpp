#include <iostream>
using namespace std ;

class area
{
    int l=4,w=9;
    public:
    void display(){
    cout<<"the area is: "<<l*w;
    }
};
int main()
{
    area r;
    r.display();
    return 0 ;
}

