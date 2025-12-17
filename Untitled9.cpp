#include <iostream>
#include <iomanip> // Thu vien nay giup lam tron so thap phan
using namespace std;

int main() {
    // 1. Khai bao cac thong so dau vao
    double chiPhiBuaAn = 88.67;      // Gia bua an
    double tiLeThue = 0.0675;        // 6.75% = 0.0675
    double tiLeTip = 0.20;           // 20% = 0.20

    // 2. Tinh tien thue
    double tienThue = chiPhiBuaAn * tiLeThue;

    // 3. Tinh tong tien sau khi cong thue (De tinh Tip dua tren so nay)
    double tongTienSauThue = chiPhiBuaAn + tienThue;

    // 4. Tinh tien Tip (20% cua tong tien sau thue)
    double tienTip = tongTienSauThue * tiLeTip;

    // 5. Tinh tong hoa don cuoi cung
    double tongHoaDon = tongTienSauThue + tienTip;

    // 6. Hien thi ket qua
    // Lenh nay giup so hien thi dep mat (lay 2 chu so sau dau phay)
    cout << fixed << setprecision(2); 

    cout << "Chi phi bua an:   $" << chiPhiBuaAn << endl;
    cout << "Tien thue (6.75%): $" << tienThue << endl;
    cout << "Tien Tip (20%):    $" << tienTip << endl;
    cout << "-------------------------" << endl;
    cout << "Tong hoa don:     $" << tongHoaDon << endl;

    return 0;
}
