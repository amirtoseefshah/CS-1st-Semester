/* Write a program to convert 45 C into faranhiet using the formula*/

#include <iostream>
using namespace std;

int main(){
    float celsius = 45.0;
    float fahrenheit;

    // Formula: (C * 9.0)/5.0 + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << "Temperature in Celsius: " << celsius << " C" << endl;
    cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;

    return 0;
}