#include<iostream>
#include<string>
#include<array>
using namespace std;

int main() {
    // penjumlahan matriks 2 X 2

    int matriks1[2][2]; // deklarasi array matriks pertama
    int matriks2[2][2]; // deklarasi array matriks kedua
    int hasil[2][2]; // deklarasi array untuk hasil penjumlahannya

    cout << "matriks pertama : " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukka elemen baris " << i + 1 << " Kolom " << j + 1 << " :"; // menginput nilai untuk matriks pertama dengan nested for
            cin >> matriks1[i][j];
        }
    }
    cout << "matriks kedua : " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukka elemen baris " << i + 1 << " Kolom " << j + 1 << " :"; // menginput nilai untuk matriks kedua dengan nested for
            cin >> matriks2[i][j];
        }
    }
    cout << "hasil penjumlahan " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // menjumlahkan matriks pertama dan kedua dengan berurutan dan dimasukkan kedalam array hasil
            cout << hasil[i][j] << " "; // menampilkan nilai yang sudah dijumlahkan
        }
        cout << endl;
    }   
}
