#include <iostream>
using namespace std;

int main() {
    system("cls");
    // goto label (instruksi untuk melompat ke label tertentu goto sebagai lokasi awal dan label sebagai tujuan)
    // hello world, Fasilkom-TI, Ilmu Komputer, IKLC
    // -> hello world, iklc, ilmu komputer, fasilkom-ti
    
    // a: // lokasi tujuan label dibawah
    //     cout << "hello world" << endl;
    //     goto d; // lokasi yang ingin dituju
    // b:
    //     cout << "fasilkom-ti" << endl;
    //     return 0;
    // c:
    //     cout << "ilmu komputer" << endl;
    //     goto b;
    // d:
    //     cout << "iklc" << endl;
    //     goto c;

    // menampilkan bilangan genap dari 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if (i % 2 == 0) {
    //     cout << i << " ";
    // } i--;

    // if (i >= 2) {
    //     goto genap;
    // }

    // statement while 
    // int i = 1;
    // while (i <= 10) { // selama i lebih kecil sama dengan 10 maka perintah dibawah akan berjalan jika tidak memnuhi maka berhenti
    //     if (i % 2 == 0){
    //         cout << i << " ";
    //     } i++;
    // }

    // statement do while
    // int i = 1;
    // do {
    //     cout << i << endl;
    // } while ( i <= 0); // statement ini akan menjalankan looping minimal sekali walaupun syaratnya tidak terpenuhi

    // statement for
    // for (inisialisasi, kondisi, increment) // tata cara penulisan looping for seperti dibahawnya
    // for (int i = 1; i <= 10; i+=2) { // looping akan berjalan selama i kecil sama dengan 0 
    //     cout << "Hello World" << endl; // i = i + 2
    // }

    // nested for // nested for adalah for bertingkat jadi didalam loop for ada loop for lagi
    // ***** 5 X 5
    // for ( int  i = 1; i <= 5; i++) { // looping akan berjalan 5 kali
    //     for (int j = 1; j <= 5; j++) { // looping akan mencetak bintang selama lima kali
    //         cout << "* ";
    //     }
    //     cout << endl; // setelah mencetak 5 bintang endl akan menurunkan linenya agar pencetakan bintang selanjutnya berada dibawah bintang sebelumnya 
    // } // pada looping berikut akan membuat persegi bintang lima kali lima

    // segitiga siku - siku
    // for  (int i = 1; i <= 5; i++) { // looping akan berjalan 5 kali
    //     for (int j = 1; j <= i; j ++) { // looping akan berjalan sampai j lebih kecil atau sama dengan i
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
}
