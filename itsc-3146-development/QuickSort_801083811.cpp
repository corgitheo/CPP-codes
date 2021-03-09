//
//  QuickSort_Skeleton.cpp
//
//  Created by Bahamon, Julio on 6/25/19.
//  UNC Charlotte
//  Copyright © 2019 Bahamon, Julio. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//  Declaring a new struct to store patient data
struct patient {
    int age;
    char name[20];
    float balance;
};

void print(patient p[]){
    for(int i = 0; i < 5; i++){
        cout << "      Age: " <<p[i].age;
        cout << "      Name: " <<p[i].name;
        cout << "      Balance Due $: " << p[i].balance << endl;
    }
}
 
//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY AGE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE AGE OF THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S AGE
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE

int compareAge (const void * a, const void * b){
    patient *x = (patient *)a;
    patient *y = (patient *)b;
    if (x->age < y->age ){
       return -1; 
    }
    if (x->age == y->age ){
        return 0;
    }
    if (x->age > y->age){
       return 1; 
    }
}


//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY BALANCE DUE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE BALANCE FOR THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S BALANCE
//       0 IF THE BALANCES ARE EQUAL
//       1 OTHERWISE

int compareBal (const void * c, const void * d){
    patient *x = (patient *)c;
    patient *y = (patient *)d;
    if (x->balance < y->balance ){
       return -1; 
    }
    if (x->balance == y->balance){
        return 0;
    }
    if (x->balance > y->balance){
       return 1; 
    }
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY NAME

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE NAME OF THE FIRST PATIENT GOES BEFORE
//         THE SECOND PATIENT'S NAME
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
//
//  HINT: USE THE strncmp FUNCTION
//  (SEE http://www.cplusplus.com/reference/cstring/strncmp/)

int compareName (const void *e, const void *f){
    patient *x = (patient *)e;
    patient *y = (patient *)f;
    return strncmp (x->name, y->name, 5);
    
}

//  The main program
int main()
{
    int total_patients = 5;
    
    //  Storing some test data
    struct patient patient_list[5] = {
        {25, "Juan Valdez   ", 1250},
        {15, "James Morris  ", 2100},
        {32, "Tyra Banks    ", 750},
        {62, "Maria O'Donell", 375},
        {53, "Pablo Picasso ", 615}
    };
    
    
    cout << "Patient List: " << endl;
    
    //  TODO:
    //  IMPLEMENT THE CODE TO DISPLAY THE CONTENTS
    //  OF THE ARRAY BEFORE SORTING
    print(patient_list);
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT AGE
    
    qsort (patient_list, 5, sizeof(patient), compareAge);
    
    cout << "Patient List - Sorted by Age: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY AGE
    print(patient_list);
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT BALANCE
    qsort (patient_list, 5, sizeof(patient), compareBal);
    
    cout << "Patient List - Sorted by Balance Due: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY BALANCE
    print(patient_list);
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT NAME
    qsort (patient_list, 5, sizeof(patient), compareName);
    cout << "Patient List - Sorted by Name: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY NAME
    print(patient_list);
    cout << endl;
    
    return 0;
}
