#include <iostream>
using namespace std;

int main() {
    // 1. Khai báo các s? li?u ban d?u
    int tongKhachHang = 16500;        // T?ng s? khách du?c kh?o sát
    double tiLeMuaNuoc = 0.15;        // 15% mua nu?c tang l?c
    double tiLeViCam = 0.58;          // 58% thích v? cam

    // 2. Tính s? lu?ng khách mua nu?c tang l?c m?i tu?n
    // Công th?c: T?ng khách * 15%
    double soKhachMuaNuoc = tongKhachHang * tiLeMuaNuoc;

    // 3. Tính s? lu?ng khách thích v? cam
    // Công th?c: (S? khách mua nu?c v?a tính du?c) * 58%
    double soKhachThichViCam = soKhachMuaNuoc * tiLeViCam;

    // 4. Hi?n th? k?t qu? ra màn hình
    cout << "Tong so khach duoc khao sat: " << tongKhachHang << endl;
    cout << "-------------------------------------------" << endl;
    
    cout << "So khach mua nuoc tang luc (15%): " << soKhachMuaNuoc << " nguoi" << endl;
    
    cout << "So khach thich vi cam (58% cua nhom tren): " << soKhachThichViCam << " nguoi" << endl;

    return 0;
}
