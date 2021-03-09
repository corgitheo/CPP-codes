#include <iostream>
using namespace std;

// Method that interchanges the value of two integers
int swapInts (int *a, int *b){
    
    // Create c to store the value of a
    int c = *a;
    
    // Swap the integers
    *a = *b;
    *b = c;
    return 0;
}

int main(){
    // Create the two integers 
    int num1, num2;
    
    // Ask the user to inout two integers
    cout << "Enter in two integers!" << endl;
    cin >> num1;
    cin >> num2;
    
    // Call the swap function
    swapInts(&num1, &num2);
    
    // Notify the user of the swap and display the swap
    cout << "\nYou have swapped/interchange your integers!"<< endl;
    cout << num1 << ' '<< num2;
}
