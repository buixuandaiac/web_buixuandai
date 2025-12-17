#include <iostream>
using namespace std;

int main() {
    cout << "--- KIEM TRA KICH THUOC DU LIEU ---" << endl;

    // 1. Kiem tra kieu char
    cout << "Kich thuoc cua kieu char:   " << sizeof(char) << " byte" << endl;

    // 2. Kiem tra kieu int
    cout << "Kich thuoc cua kieu int:    " << sizeof(int) << " bytes" << endl;

    // 3. Kiem tra kieu float
    cout << "Kich thuoc cua kieu float:  " << sizeof(float) << " bytes" << endl;

    // 4. Kiem tra kieu double
    cout << "Kich thuoc cua kieu double: " << sizeof(double) << " bytes" << endl;

    return 0;
}
