#include <iostream>
using namespace std;

int main() {
    // 1. Khai báo nhi?t d? cu c?a 3 thành ph?
    double tempNYC = 85.0;
    double tempDenver = 88.0;
    double tempPhoenix = 106.0;

    // 2. Khai báo t? l? tang (2% = 0.02)
    double tiLeTang = 0.02;

    // 3. Tính toán nhi?t d? m?i
    // Nhi?t d? m?i = Nhi?t d? cu + (Nhi?t d? cu * 0.02)
    double newNYC = tempNYC + (tempNYC * tiLeTang);
    double newDenver = tempDenver + (tempDenver * tiLeTang);
    double newPhoenix = tempPhoenix + (tempPhoenix * tiLeTang);

    // 4. Hi?n th? k?t qu? ra màn hình
    cout << "--- DU BAO NHIET DO THANG 7 (TANG 2%) ---" << endl;
    
    cout << "1. New York City:" << endl;
    cout << "   Cu: " << tempNYC << " F -> Moi: " << newNYC << " F" << endl;
    cout << endl; // Dòng tr?ng cho d? nhìn

    cout << "2. Denver:" << endl;
    cout << "   Cu: " << tempDenver << " F -> Moi: " << newDenver << " F" << endl;
    cout << endl;

    cout << "3. Phoenix:" << endl;
    cout << "   Cu: " << tempPhoenix << " F -> Moi: " << newPhoenix << " F" << endl;

    return 0;
}
