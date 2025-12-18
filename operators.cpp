#include<iostream>

using namespace std;

int main(){
    int a =4, b  = 5;
    cout<<"C++ Operators :)"<<endl;
    cout<<"Following are common c++ operators:"<<endl;

    //arithmetic ops
    cout<<"Sum of a+b "<<a+b <<endl;
    cout<<"Sum of a-b "<<a-b <<endl;
    cout<<"Sum of a*b "<<a*b <<endl;
    cout<<"Sum of a/b "<<a/b <<endl;
    cout<<"Sum of a%b "<<a%b <<endl;
    cout<<"Sum of a++ "<<a++<<endl;
    cout<<"Sum of a-- "<<a--<<endl;
    cout<<"Sum of ++a "<<++a<<endl;
    cout<<"Sum of --a "<<--a<<endl;

    //assignment operators: used to assign values to vars
    //int a = 5
    //char u = 'g'


    //comparison operators
    cout<<"These are comparison operators:";
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;

    //logical operators

    cout<<"These are logical operators:";
    cout<<"The value of logical operator is "<<((a==b)&& (a<b))<<endl;
    cout<<"The value of logical operator is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical operator is "<<(!(a==b))<<endl;

    return 0;
}