#include <iostream>
using namespace std;


int ADD(int x, int y) {
    return x + y;
}

int main() {
    int x, y; 
    cout << "Enter the first number: ";
    cin >> x; 
    cout << "Enter the second number: ";
    cin >> y; 
    
    cout << "The sum is: " << ADD(x, y) << endl;

    return 0;
}
