#include <iostream>
#include <iomanip> // Thu vi?n dùng d? d?nh d?ng ti?n t? (2 s? th?p phân)
using namespace std;

int main() {
    // 1. Khai báo d? li?u d?u vào
    double soLuongCoPhieu = 750;      // S? lu?ng: 750 c? phi?u
    double giaMoiCoPhieu = 35.00;     // Giá: 35.00 dô/c? phi?u
    double tiLeHoaHong = 0.02;        // Hoa h?ng: 2% (tuong duong 0.02)

    // 2. Th?c hi?n tính toán
    // a. Tính ti?n mua c? phi?u (Chua tính hoa h?ng)
    double tienCoPhieu = soLuongCoPhieu * giaMoiCoPhieu;

    // b. Tính ti?n hoa h?ng (D?a trên t?ng giá tr? c? phi?u v?a tính)
    double tienHoaHong = tienCoPhieu * tiLeHoaHong;

    // c. Tính t?ng s? ti?n thanh toán
    double tongTien = tienCoPhieu + tienHoaHong;

    // 3. Hi?n th? k?t qu? ra màn hình
    // L?nh này giúp hi?n th? s? ti?n d?p hon (vd: 26250.00 thay vì 26250)
    cout << fixed << setprecision(2); 

    cout << "--- HOA DON GIAO DICH CHUNG KHOAN ---" << endl;
    cout << "1. Tien mua co phieu:   $" << tienCoPhieu << endl;
    cout << "2. Tien hoa hong (2%):  $" << tienHoaHong << endl;
    cout << "-------------------------------------" << endl;
    cout << "3. TONG TIEN PHAI TRA:  $" << tongTien << endl;

    return 0;
}
