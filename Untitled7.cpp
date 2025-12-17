#include <iostream>
#include <iomanip> // Thu vien nay dung de dinh dang so (khong bat buoc nhung giup in dep hon)
using namespace std;

int main() {
    // 1. Khai bao bien luu ti le phan tram (58% = 0.58)
    double tiLePhanTram = 0.58;

    // 2. Khai bao bien luu tong doanh thu (8.6 trieu = 8,600,000)
    double tongDoanhThu = 8600000;

    // 3. Tinh toan doanh thu cua Phong sale The East Coast
    double doanhThuEastCoast = tongDoanhThu * tiLePhanTram;

    // 4. In ket qua ra man hinh
    cout << "Tong doanh thu cua cong ty la: $" << tongDoanhThu << endl;
    cout << "Ti le dong gop cua The East Coast: " << tiLePhanTram * 100 << "%" << endl;
    
    // In ra so thuc o dang mac dinh
    cout << "---------------------------------" << endl;
    cout << "Du doan doanh thu cua The East Coast la: $" << doanhThuEastCoast << endl;
    
    // (Tuy chon) Lenh nay giup in so khong bi hien thi dang 4.988e+006
    cout << fixed << setprecision(0); 
    cout << "(Viet day du la: $" << doanhThuEastCoast << ")" << endl;

    return 0;
}
