#include <iostream>

using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* p = new int[n];
    int* q = new int[n];

    std::cout << "Enter elements for array p: ";
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    std::cout << "Enter elements for array q: ";
    for (int i = 0; i < n; ++i) {
        cin >> q[i];
    }

    int count_p = 0;
    int count_q = 0;

    for (int i = 0; i < n; ++i) {
        if (p[i] == 1) {
            ++count_p;
        }
        if (q[i] == 1) {
            ++count_q;
        }
    }

    if (count_p > count_q) {
        cout << "Array p has more elements equal to 1.\n";
    }
    else if (count_q > count_p) {
        cout << "Array q has more elements equal to 1.\n";
    }
    else {
        cout << "Both arrays have the same number of elements equal to 1.\n";
    }

    delete[] p;
    delete[] q;

    return 0;
}
