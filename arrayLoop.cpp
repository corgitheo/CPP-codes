#include <iostream>
using namespace std;

int main()
{
    //Variables for the program
    
    // Create an array for 10 elements.
    int array[10];
    
    // Create num equal to 10.
    int num = 10;
    
    // Prompt user to input to integers and save integer to array.
    for (int x = 0; x < num; x++){
        cout << "Enter in 10 integers! ";
        cin >> array[x];
    }
    
    // This prints out the array in the order the user inputs!
    /*for(int y=1; y<=10; y++){
    cout << array[x] << endl;
    }
    */
    
    // Get the array and put the array in reverse order.
    cout << "\nReverse Order: " << endl;
    for (int r = num-1; r >= 0; r--){
        // Print out array in reverse order
        cout << array[r] << ' ';
    }
    
    // Put the array in ascending order (lowest to highest).
    cout << "\n\nLowest to Highest:" << endl;
    
    /* nested for-loop that loops through the array and if one element 
    is less than the other, switch order. */
        for (int a = 0; a < num; a++){           // loops through the array index of a.
            for (int b = a+1; b < num; b++){    // loops through the array index of b.
                if (array[a] > array[b]){        // if the value of array[a] is greater array[b], execute code.
                    int c = array[a];           
                    array[a] = array[b];          
                    array[b] = c;                
                }
            }
        }
        
        // Print out array in ascending order
        for (int d = 0; d < num; d++){
            cout << array[d]<< ' ';
        }
    }
