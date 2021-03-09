#include <iostream>
using namespace std;

int main(){
    
    // Create num and set to 4.
    int num = 4;
    
    // Create an array of integers with num elements.
    int my_ints[num];
    
    // Create array of pointers with num elements. 
    int *my_ptrs[num];
     
    // For-loop that asks user for a max of 4 integers
    for (int x = 0; x < num; x++){
        cout << "Enter a number! ";
        cin >> my_ints[x];
    }
    
    /*
    // For-loop that prints out the user's input
    // verification to make sure it works.
    for (int j = 0; j < num; j++){
        cout << my_ints[j] << ' ';
    }
    */
  
    // For-loop that goes through the array and sets the address to the pointers.
    for (int i = 0; i < num; i++){
        my_ptrs[i] = &my_ints[i];
    }
    
    // For-loop that puts in acending order... used my code from previous exercise for 3688.
    for (int a = 0; a < num; a++){           // loops through the array index of a.
            for (int b = a+1; b < num; b++){    // loops through the array index of b.
                if (my_ints[a] > my_ints[b]){        // if the value of array[a] is greater array[b], execute code.
                    int c = my_ints[a];           
                    my_ints[a] = my_ints[b];          
                    my_ints[b] = c;                
                }
            }
        }
        
        // Print out the array in order.
        cout << "\nSorting completed...";
        cout << "\nOutput: ";
        for (int a = 0; a < num; a++){
            cout << *my_ptrs[a] << ' ';
        }
        
        return 0;
}