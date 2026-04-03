#include <iostream>
using namespace std;

int main()
{
    //declaring pointer and initializing
// so that i doesnt store random adress

    int* pPointer = nullptr;

    int integerVar = 5;

    // assign pointer to address the object
    pPointer = &integerVar;

    //outpout the value of intergervar

    cout << "integerVar: " << integerVar << endl;

    //output the address of integerVar

    cout << "Address of integerVar: " << &integerVar << endl;

    //output the address of assigned pointer

    cout << "the address of assigned pointer: " << pPointer << endl;

    //output the address of the pointer

    cout << "address of pPointer: " << &pPointer << endl;

    return 0;

}