#include <iostream>
using namespace std;

int main() {
    // 1. Khai báo các thông s? c?a xe
    double dungTichBinh = 20.0;     // 20 gallon
    double mpgThanhPho = 23.5;      // 23.5 d?m/gallon trong ph?
    double mpgCaoToc = 28.9;        // 28.9 d?m/gallon trên cao t?c

    // 2. Tính quãng du?ng di du?c (Distance)
    // Công th?c: Quãng du?ng = Dung tích * MPG
    double quangDuongThanhPho = dungTichBinh * mpgThanhPho;
    double quangDuongCaoToc = dungTichBinh * mpgCaoToc;

    // 3. Hi?n th? k?t qu? ra màn hình
    cout << "--- THONG SO XE O TO ---" << endl;
    cout << "Dung tich binh xang: " << dungTichBinh << " gallon" << endl;
    cout << "------------------------" << endl;

    cout << "1. Lai xe trong thanh pho (Town):" << endl;
    cout << "   Tieu thu: " << mpgThanhPho << " dam/gallon" << endl;
    cout << "   -> Quang duong di duoc: " << quangDuongThanhPho << " dam" << endl;
    cout << endl; // In dong trong cho de nhin

    cout << "2. Lai xe tren cao toc (Highway):" << endl;
    cout << "   Tieu thu: " << mpgCaoToc << " dam/gallon" << endl;
    cout << "   -> Quang duong di duoc: " << quangDuongCaoToc << " dam" << endl;

    return 0;
}
