#include <iostream>
using namespace std;

int main () {
    system("cls");
    float V, Lp, r; // deklarasi variabel dan type datanya

    cout << "masukkan jari-jari : ";
    cin >> r;
    
    V = ((float) 4/3)* 3.14 * r * r * r;// pada 4/3 dipakai setprecision float agar hasilnya benar
    Lp = 4 * 3.14 * r * r;

    cout << "hasil volume bola : " << V << endl;
    cout << "luas permukaan bola : " << Lp << endl;

    return 0;
    
}
