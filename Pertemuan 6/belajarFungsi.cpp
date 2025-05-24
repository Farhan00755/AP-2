#include <iostream>
using namespace std;

void sapa(string nama) { // deklarasi untuk fungsi dan variabelnya
    cout << "Halo " << nama <<" ! Selamat Datang di AP 2 !" << endl;
}

int main() {
    string namaPengguna = "Farhan"; // deklarasi nama user

    sapa(namaPengguna); // memanggil fungsi yang sudah dibuat

    return 0;
}
