#include <iostream>
using namespace std;

void IntToPointer(){

    int a = 25; // Init Variable with Value
    int *MyPointer; // Defining Pointer

    MyPointer = &a; // Init The Pointer

    cout << "The Value is " << a << endl;
    cout << "The Address Is " << MyPointer << endl;
    cout << "The Address Is " << *MyPointer << endl;
    cout << "The Address Is " << *MyPointer+1 << endl;
    cout << "The Address Is " << MyPointer+1 << endl;
    // cout << sizeof(MyPointer) << endl;

}


void ArryPointer(){

    int Arr[5] = {5,2,5,8,6};
    int *ptr;

    for (int i = 0; i < 5 ; i++){
        ptr = &Arr[i];
        cout << "The Address Of" << Arr[i] << "Is" << ptr << endl;       
    }
    

}

int main() {

    ArryPointer();
    // IntToPointer();
    return 0;

}