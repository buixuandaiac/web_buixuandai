#include <iostream>
using namespace std;

int main() {
    // 1. Khai báo các bi?n d?u vào
    double giaDonHang = 95.0;       // Giá tr? don hàng là 95 dô
    double tiLeThueTieuBang = 0.04; // 4% tuong duong 0.04
    double tiLeThueQuan = 0.02;     // 2% tuong duong 0.02

    // 2. Th?c hi?n tính toán
    double tienThueTieuBang = giaDonHang * tiLeThueTieuBang;
    double tienThueQuan = giaDonHang * tiLeThueQuan;

    // Tính t?ng thu?
    double tongThue = tienThueTieuBang + tienThueQuan;

    // 3. In k?t qu? ra màn hình
    cout << "Gia tri don hang: $" << giaDonHang << endl;
    cout << "-----------------------------------" << endl;
    cout << "Tien thue Tieu bang (4%): $" << tienThueTieuBang << endl;
    cout << "Tien thue Quan (2%):      $" << tienThueQuan << endl;
    cout << "-----------------------------------" << endl;
    cout << "Tong thue phai tra la:    $" << tongThue << endl;

    return 0;
}
