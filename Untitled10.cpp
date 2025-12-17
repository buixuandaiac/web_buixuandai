#include <iostream>
using namespace std;

int main() {
    // 1. Khai báo và luu tr? 5 giá tr? vào 5 bi?n
    double so1 = 28;
    double so2 = 32;
    double so3 = 37;
    double so4 = 24;
    double so5 = 33;

    // 2. Tính t?ng c?a 5 bi?n và luu vào bi?n 'sum'
    double sum = so1 + so2 + so3 + so4 + so5;

    // 3. Tính giá tr? trung bình (l?y t?ng chia cho 5)
    double trungBinh = sum / 5;

    // 4. Hi?n th? k?t qu? ra màn hình
    cout << "Tong cua 5 so la: " << sum << endl;
    cout << "Gia tri trung binh la: " << trungBinh << endl;

    return 0;
}
