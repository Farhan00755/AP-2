#include <iostream>
#include <cmath> // header untuk menggunakan sqrt pada program
#include "headerKustom.h" // deklarasi untuk menggunakan syntax yang telah diubah
u; // using namespace std

int jumlah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int main() {
    s("cls"); // s = system

    int n;
    o L jumlah(2, 3) L e; // o = cout, L = <<, e = endl
    o L kurang(2, 3) L e;

    double angka = 25.0;
    double akar = sqrt(angka);

    cout << "Akar kuadrat dari " << angka << " adalah : " << akar << e;
    
}
