#include<iostream>
#include<string.h>
using namespace std;

struct MyObj{
    string name = "My Name is Varun \n";
    int age = 25;
    int Num = 1125;

    struct Meta{
        int size = 250;
    };
    
};


int main(){

    MyObj Obj1;
    int *ptr;

    ptr = &Obj1.Num;

    cout << "C++ is Live \n";
    cout << Obj1.name << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}