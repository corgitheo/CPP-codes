#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    float x;
    float y;
} p1, p2;

void calculateDistance( Point p1, Point p2){
    
    // First part with x's
    float a = (p2.x - p1.x);
    float b = a*a;
    
    // Second part with y's
    float c = (p2.y - p1.y);
    float d = c*c;
    
    // Adding together
    float e = b + d;
    
    // Square root together
    float f = sqrt(e);
    
    // Display results.
    cout << f << endl;
}

int main(){
    
    // Create Points
    Point p1, p2;
    
    // Prompt user to enter in the first coordinate.
    cout << "\nEnter two integers for the first coordinate:" << endl;
    cin >> p1.x >> p1.y; 
    
    // Prompt user to enter in the second coordinate.
    cout << "\nEnter two integers for the second coordinate:" << endl;
    cin >> p2.x >> p2.y;
    
    //Display the results.
    cout << "\nThe distance between the two cooridnates is: ";
    calculateDistance(p1, p2);
}