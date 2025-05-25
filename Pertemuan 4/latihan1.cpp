#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i;

    system("cls");

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat); // getline adalah perintah yang dapat menerima spasi

    // farhan
    for (i = 0; i < kalimat.length(); i++) { // kalimat.length untuk mengetahui panjang kalimat misalnya KOTA panjang kalimatnya 4 jadi loop for akan berjalan selama i lebih kecil dari 4
        kalimat[i] = toupper (kalimat[i]); // kalimat ke i akan di capslock semua 
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl; // menampilkan kalimat yang sudah di ubah menjadi huruf besar
    //FARHAN 
    
    return 0;
    
}
