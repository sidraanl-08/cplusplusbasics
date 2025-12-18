#include<iostream>

using namespace std;

//integer
int main(){
    int age = 20;
    cout << "My age is:"<< age<<endl;

//float (decimal numbers of low precision)

    float num = 334.58;
    cout << "This is a float:" << num <<endl;

//double (decimal numbers of high precision)

    double num = 123.578903938;
    cout << "This is a double:" << num <<endl;

//character

    char grade = 'A';
    cout <<"Grade:"<< grade << endl;

//boolean

    bool isStudent = true;
    cout <<"Is Student:"<< isStudent << endl;

//string

    string name = "Sidra";
    cout <<"Name:"<< name << endl;

    return 0;
}


///understanding variable scope
//it is the region in the code where existence of a variable is valid
//local variables: declared inside braces of any function, can be accessed only from there
//global variables: declared outside function and can be accessed only from anywhere
//global and local variables can have same name in C++
