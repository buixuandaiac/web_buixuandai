#include <iostream>
#include <iomanip> // Thu vien de dinh dang so tien (2 chu so thap phan)
using namespace std;

int main() {
    // 1. Khai bao va luu gia cua 5 mon do
    double item1 = 15.59;
    double item2 = 24.59;
    double item3 = 6.59;
    double item4 = 12.59;
    double item5 = 3.59;
    
    // Khai bao ti le thue (7% = 0.07)
    double tiLeThue = 0.07;

    // 2. Tinh tong tam tinh (Subtotal)
    double subTotal = item1 + item2 + item3 + item4 + item5;

    // 3. Tinh tien thue (Tax)
    double tienThue = subTotal * tiLeThue;

    // 4. Tinh tong phai tra (Total)
    double total = subTotal + tienThue;

    // 5. Hien thi ket qua
    // Lenh nay de so hien thi dep mat (lay 2 so sau dau phay)
    cout << fixed << setprecision(2); 

    cout << "--- HOA DON CHI TIET ---" << endl;
    cout << "Mon do 1:       $" << item1 << endl;
    cout << "Mon do 2:       $" << item2 << endl;
    cout << "Mon do 3:       $" << item3 << endl;
    cout << "Mon do 4:       $" << item4 << endl;
    cout << "Mon do 5:       $" << item5 << endl;
    cout << "------------------------" << endl;
    cout << "Tong tam tinh:  $" << subTotal << endl;
    cout << "Thue (7%):      $" << tienThue << endl;
    cout << "------------------------" << endl;
    cout << "TONG PHAI TRA:  $" << total << endl;

    return 0;
}
