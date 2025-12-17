#include <iostream>
using namespace std;

int main() {
    // 1. Khai báo t?c d? nu?c bi?n dâng hàng nam
    double tocDoTang = 1.5; // Ðon v?: mm/nam

    // 2. Tính toán m?c tang cho các kho?ng th?i gian
    double sau5Nam = tocDoTang * 5;
    double sau7Nam = tocDoTang * 7;
    double sau10Nam = tocDoTang * 10;

    // 3. Hi?n th? k?t qu? ra màn hình
    cout << "Toc do nuoc bien dang: " << tocDoTang << " mm/nam" << endl;
    cout << "-----------------------------------" << endl;
    
    cout << "Muc nuoc bien tang sau 5 nam:  " << sau5Nam << " mm" << endl;
    cout << "Muc nuoc bien tang sau 7 nam:  " << sau7Nam << " mm" << endl;
    cout << "Muc nuoc bien tang sau 10 nam: " << sau10Nam << " mm" << endl;

    return 0;
}
