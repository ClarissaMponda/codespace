#include <iostream>
using namespace std;

int main()
{
    //declaration
    int firstValue;
    int secondValue;

    int* pPointer = nullptr;

    //assign pointer with address of the first value

    pPointer = &firstValue;
    *pPointer = 10; //indirection

    //assign pointer with the address of second value 

    pPointer = &secondValue;
    *pPointer = 20; //indirection

    cout << "firstValue is: " << firstValue << '\n';

    cout << "secondValue is: " << secondValue << '\n';

    return 0;






}