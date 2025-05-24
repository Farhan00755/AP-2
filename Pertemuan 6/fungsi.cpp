#include <iostream> 
using namespace std;

// fungsi tanpa nilai balikan
void tampilkanPesan() {
    cout << "==== SELAMAT DATANG DI AP 2 ====" << endl;
}

// fungsi dengan nilai balikan adalah fungsi yang memiliki nilai untuk diambil / dikembalikan ke dalam program utama
int tambah(int a, int b) { // parameter formal
    return a + b;
}

// fungsi overload adalah fungsi yang memiliki nama dan variabel yang sama tetapi berbeda tipe data seperti 2 fungsi dibawah
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;
}

// fungsi rekursif adalah fungsi yang memanggil dirinya sendiri
int faktorial(int n) {
    if (n == 0  || n == 1) {
        return 1;
    } else {
        return n * faktorial(n-1);
    }
}

int main() {
    system("cls");

    // menggunakan fungsi tanpa nilai balikan 
    tampilkanPesan();

    int x = 5, y = 3;

    // menggunakan fungsi dengan nilai balikan 
    int hasilTambah = tambah(x, y); // setelah dikembalikan dari fungsi nilainya dimasukkan kedalam variabel (fungsi dipanggil dengan parameter aktual)
    cout << "Hhasil penjumlahan : " << hasilTambah << endl;

    // menggunakan fungsi overload
    int hasilKaliInt = kali(x, y); 
    double hasilKaliDouble = kali(5.5, 2.0);
    // memanggil fungsinya sama hanya beda tipe dan datanya saja

    cout << "Hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "Hasil perkalian (double) : " << hasilKaliDouble << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah : " << faktorial(angka) << endl; // menjalankan fungsi refursif dan ditampilkan
}
