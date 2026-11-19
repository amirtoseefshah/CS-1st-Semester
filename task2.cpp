/* Write a C++ program to compute the quotient and remainder */

#include <iostream>
using namespace std;

int main(){
    int Devidend, Devisor, Quotient, Remainder;

    cout<<"Enter the number you want to devide by: ";
    cin>>Devisor;
    cout<<"Enter the number you want to devide: ";
    cin>>Devidend;

    Quotient = Devidend/Devisor;
    Remainder = Devidend % Devisor;

    cout<<"Quotient: "<<Quotient<<endl;
    cout<<"Remainder: "<<Remainder<<endl;

    return 0;

}