#include <iostream>

using namespace std;

int main()
{
 
    int* p1, * p2;

    p1 = new int;
    p2 = new int;

    *p1 = 22;
    *p2 = 33;

    cout << "Before swapping:" << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swapping:" << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    delete p1;
    delete p2;

    return 0;
}
