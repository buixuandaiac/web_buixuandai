#include <iostream>
using namespace std;

int main() {
    // 1. Khai báo các bi?n
    double giaVon = 14.95;        // Chi phí g?c ($14.95)
    double tiLeLoiNhuan = 0.35;   // 35% l?i nhu?n (tuong duong 0.35)
    
    // 2. Tính toán
    // Bu?c a: Tính s? ti?n l?i
    double tienLoi = giaVon * tiLeLoiNhuan;
    
    // Bu?c b: Tính giá bán (Giá g?c + Ti?n l?i)
    double giaBan = giaVon + tienLoi;

    // 3. Hi?n th? k?t qu? ra màn hình
    cout << "Chi phi goc:      $" << giaVon << endl;
    cout << "Ti le loi nhuan:  " << tiLeLoiNhuan * 100 << "%" << endl;
    cout << "-------------------------" << endl;
    cout << "So tien loi:      $" << tienLoi << endl;
    cout << "Gia ban can thiet: $" << giaBan << endl;

    return 0;
}
