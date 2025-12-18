///these are the types of data, a variable can store 
//eg: an integer variable can hold integer data
//eg: a character variable can hold character data

///types of C++ datatypes
//built-in: int, float, char, double, bool, string
//user-defined: struct, union, enum 
//derived: array, function, pointer


///understanding variable scope
//it is the region in the code where existence of a variable is valid
//local variables: declared inside braces of any function, can be accessed only from there
//global variables: declared outside function and can be accessed only from anywhere
//global and local variables can have same name in C++


///rules for variable declaration
//vars in C++ can range from 1 to 255 characters
//vars must begin with letters or underscore
//vars can have numbers/letters after first initial letter
//vars are case sensitive
//vars cant have special characters or spaces
//vars cant have reserved keyword as name

#include<iostream>

using namespace std;

int glo = 6; //global variable

void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo = 9; //local var gets precedence
    glo = 78;
    //int a = 4;
    //int b = 5;
    //cout<<"These are datatypes. Here the value of a is: "<<a<< ". The value of b is: "<<b<<endl;

    int c = 10, d = 20;
    float pi = 3.14;
    char f = 'u';
    bool is_true = false; //gives 0 for false, and 1 for true
    sum();
    //cout<<"datatypes can be written in one line with a comma"<<endl;
    //cout<<"The value of pi is: "<<pi<<endl;
    //cout<<"The value of f is: "<<f<<endl;
    cout<<glo;
    cout<<glo<<is_true;

    return 0;
}