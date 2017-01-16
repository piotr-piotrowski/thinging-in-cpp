#include <iostream>

using namespace std;

/*
 * Using Stream2.cpp and Numconv.cpp as guidelines, 
 *  create a program that asks for the radius of a circle 
 *  and prints the area of that circle. 
 * You can just use the ‘*’ operator to square the radius. 
 * Do not try to print out the value as octal or hex 
 *  (these only work with integral types).
 */
int main() {
    float radius;
    cout << "Enter a radius: ";
    cin >> radius;
    cout << "Area of the circle is: " << 3.14 * radius * radius << endl;
    return 0;
}
