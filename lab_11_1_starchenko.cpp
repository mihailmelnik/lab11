#include <iostream>

using namespace std;

int main() 
{
    char a, b, c;
    cout << "Enter three characters:" << endl;
    cin >> a >> b >> c;

    char* pa = &a;
    char* pb = &b;
    char* pc = &c;

    char temp = *pa;
    *pa = *pb;
    *pb = temp;

    cout << "After swapping a,b:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    temp = *pb;
    *pb = *pc;
    *pc = temp;

    cout << "After swapping:" << endl;
    cout << "a: " << b << endl;
    cout << "c :" << c << endl;
    
    return 0;
}
