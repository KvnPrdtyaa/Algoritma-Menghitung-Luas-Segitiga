#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    double Alas, Tinggi, Luas;
    
    // Input
    cout << "Masukkan nilai  (cm) \t\t: ";
    cin >> Alas;
    cout << "Masukkan nilai Tinggi (cm) \t: ";
    cin >> Tinggi;
    
    // Menghitung luas segitiga
    Luas = (Alas * Tinggi) / 2;
    
    // Cetak Luas
    cout << "Luas Segitiga adalah \t\t= " << Luas << " cm^2" << endl;
    
    return 0;
}