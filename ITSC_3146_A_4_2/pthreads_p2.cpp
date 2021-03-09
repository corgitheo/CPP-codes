/*
 @file: pthreads_skeleton.cpp
 
 @author: student name1, student2@uncc.edu
 @author: student name2, student2@uncc.edu
 @author: student name3, student3@uncc.edu
 
 @description: A program that demonstrates processes.
 
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */

#include <pthread.h>
#include <iostream>

using namespace std;

// Global Array
int array[10];
// Number of integers needed
int t = 10;

// This function shows the skeleton that pthread 
// functions must adhere to. 
// Copy this skeleton for any pthread function 
// you need to define. 
// In the copy, modify the name of the function 
// and the function body as needed. 
void *countNegatives(void *arg)
{
   // TODO: Add code that implements
   //       the thread's functionality
   
   // Implement a counter to count the number of negatives numbers
   int totalneg = 0;
   for (int i = 0; i < t; i++){
      int index = array[i];
   if(index < 0){
      totalneg++;
   }   
   }
   cout << "\nTotal negative numbers: " << totalneg << endl;
   return 0;
}

void *average(void *arg)
{
   // TODO: Add code that implements
   //       the thread's functionality
   int x;
   int avg = 0;
   for (int i = 0; i < t; i++){
      int index = array[i];
      avg = avg + index;
   }
   
   avg = avg/t; 
   
   cout << "\nAverage: " << avg << endl;
   return 0;
}

void *reverse(void *arg)
{
   // TODO: Add code that implements
   //       the thread's functionality
   cout << "\nThe numbers in reverse: " << endl;
   for (int i = t; i > 0; i--){
      int index = array[i-1];
      cout << index << endl;
   }
   return 0;
}

int main()
{
   // id is used to store a unique thread identifier,
   // returned by the call to create a new POSIX thread
   pthread_t id;
   
   // rc is used to store the code returned by the
   // call to create a new POSIX thread. The value is
   // zero (0) if the call succeeds.
   int rc, sc, qc, tc;
   
   // TODO: Add code to perform any needed initialization
   //       or to process user input
   
   for (int i = 0; i < t; i++){
        cout << "Enter a integer: ";
        cin >> array[i];
    }
   
   // Create thread(s)
   // TODO: Modify according to assignment requirements
   qc = pthread_create(&id, NULL, reverse, NULL);
   sc = pthread_create(&id, NULL, average, NULL);
   rc = pthread_create(&id, NULL, countNegatives, NULL);
   
   if (rc){
      cout << "ERROR; return code from pthread_create() is " << rc << endl;
      return -1;
   }
   
    if (sc){
      cout << "ERROR; return code from pthread_create() is " << sc << endl;
      return -1;
   }
   
   if (qc){
      cout << "ERROR; return code from pthread_create() is " << qc << endl;
      return -1;
   }

   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
}
