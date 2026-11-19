/* Take a two integers as input from the user,apply the arithematic(+-,-,*,/)
on them and print result on screen*/

#include <iostream>
using namespace std;

int main(){
    int V1,V2;

    cout<<"Enter No 1: ";
    cin>>V1;
    cout<<"Enter No 2: ";
    cin>>V2;

    cout<<"Addition is: "<<V1 + V2<<endl;
    cout<<"Substraction is: "<<V1 - V2<<endl;
    cout<<"Multiplication is: "<<V1 * V2<<endl;
    cout<<"Devision is: "<<V1 / V2<<endl;

    return 0;
}