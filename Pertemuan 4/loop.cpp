#include <iostream>
using namespace std;

int main() {
    system("cls");
    // goto label (instruksi untuk melompat ke label tertentu goto sebagai lokasi awal dan label sebagai tujuan)
    // hello world, Fasilkom-TI, Ilmu Komputer, IKLC
    // -> hello world, iklc, ilmu komputer, fasilkom-ti
    
    // a:
    //     cout << "hello world" << endl;
    //     goto d;
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
    // while (i <= 10) {
    //     if (i % 2 == 0){
    //         cout << i << " ";
    //     } i++;
    // }

    // statement do while
    // int i = 1;
    // do {
    //     cout << i << endl;
    // } while ( i <= 0);

    // statement for
    // for (inisialisasi, kondisi, increment)
    // for (int i = 1; i <= 10; i+=2) {
    //     cout << "Hello World" << endl; // i = i + 2
    // }

    // nested for
    // ***** 5 X 5
    // for ( int  i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= 5; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // segitiga siku - siku
    // for  (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= i; j ++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
}