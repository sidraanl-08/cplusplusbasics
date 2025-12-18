//C++ comes with libraries that help us with input/output
//so in C++ sequence of bytes corresponding to I/O are called streams
//input stream: direction of flow of bytes takes place from input device (keyboard, mouse) to main memory
//output stream: direction of flow of bytes takes place from memory to output device (display)

#include<iostream>

using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter value of num1: "<<endl; //insertion operator
    cin>>num1; //extraction operator

    cout<<"Enter value of num2: "<<endl; //insertion operator
    cin>>num2; //extraction operator

    cout<<"The sum is: "<<num1 + num2;
    return 0;
}