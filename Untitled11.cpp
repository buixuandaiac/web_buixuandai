#include <iostream>
using namespace std;

int main() {
    // 1. Khai báo các bi?n theo yêu c?u
    double payAmount = 2200.0;  // S? ti?n ki?m du?c m?i k? luong ($2,200)
    int payPeriods = 26;        // S? k? luong trong m?t nam (26 l?n)
    double annualPay;           // Bi?n d? luu t?ng thu nh?p hàng nam

    // 2. Tính toán t?ng thanh toán hàng nam
    annualPay = payAmount * payPeriods;

    // 3. Hi?n th? k?t qu? ra màn hình
    cout << "Muc luong moi ky:      $" << payAmount << endl;
    cout << "So ky luong trong nam: " << payPeriods << endl;
    cout << "--------------------------------" << endl;
    cout << "Tong thu nhap hang nam (annualPay) la: $" << annualPay << endl;

    return 0;
}
