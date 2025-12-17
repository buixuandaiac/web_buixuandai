#include <iostream>
using namespace std;

int main() {
    // 1. Khai báo các thông s?
    double chieuCao = 6.0;           // Chi?u cao: 6 feet
    double chieuDai = 100.0;         // Chi?u dài: 100 feet
    double doPhuSon = 340.0;         // 1 gallon ph? du?c 340 feet vuông
    int soLopSon = 2;                // Yêu c?u son 2 l?p

    // 2. Tính toán di?n tích
    // Bu?c a: Tính di?n tích m?t m?t hàng rào
    double dienTichHangRao = chieuCao * chieuDai;

    // Bu?c b: Tính t?ng di?n tích c?n son (cho 2 l?p)
    double tongDienTichCanSon = dienTichHangRao * soLopSon;

    // Bu?c c: Tính s? gallon c?n thi?t
    double soGallonCanThiet = tongDienTichCanSon / doPhuSon;

    // 3. Hi?n th? k?t qu? chi ti?t
    cout << "--- TINH TOAN SON HANG RAO ---" << endl;
    cout << "Dien tich hang rao: " << dienTichHangRao << " ft2" << endl;
    cout << "Tong dien tich can son (2 lop): " << tongDienTichCanSon << " ft2" << endl;
    cout << "--------------------------------" << endl;
    cout << "So gallon son can thiet: " << soGallonCanThiet << " gallon" << endl;

    return 0;
}
