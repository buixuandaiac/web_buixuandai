#include <iostream>
using namespace std;

int main() {
    // 1. Khai báo các bi?n
    double soGallon = 15.0;   // Dung tích bình xang (15 gallon)
    double soDam = 375.0;     // Quãng du?ng di du?c (375 d?m)
    double mpg;               // Bi?n luu k?t qu? (Miles Per Gallon)

    // 2. Tính toán s? d?m trên m?i gallon
    // Công th?c: MPG = Quãng du?ng / S? gallon
    mpg = soDam / soGallon;

    // 3. Hi?n th? k?t qu? ra màn hình
    cout << "Dung tich binh xang: " << soGallon << " gallon" << endl;
    cout << "Quang duong di duoc:  " << soDam << " dam" << endl;
    cout << "---------------------------------" << endl;
    cout << "So dam tren moi gallon (MPG) la: " << mpg << endl;

    return 0;
}
