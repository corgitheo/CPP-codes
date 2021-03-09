#include <iostream>
using namespace std;

int main(){
    
    // Create variables
    int myInt = 15;
    int *myPointer;
    
    // set pointer to the address of myInt
    myPointer = &myInt;
    
    // Print out  memory location of myInt 
    cout << myPointer << endl;
    
    // Print out value of myPointer 
    cout << *myPointer << endl;
    
    // Print out value of myInt 
    cout << myInt << endl;
    
    // Print out value pointed to by myPointer
    cout << *myPointer << endl << "\n";
    
    // Change value to 10
    myInt = 10; 
    
    // Repeat same process as above
    myPointer = &myInt;
    cout << myPointer << endl;
    cout << *myPointer << endl;
    cout << myInt << endl;
    cout << *myPointer << endl;
    
    return 0;
}