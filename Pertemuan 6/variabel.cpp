#include <iostream>
using namespace std;

string namaGlobal = "Ilmu"; // deklarasi variabel global yang dapat dipanggil baik dari proram utama dan sub program / fungsi

void namaVariabel() {
    string namaLokal = "Komputer"; // variabel yang dapat dipanggil hanya dalam fungsi ini saja

    //coba akses variabel lokal
    cout << namaLokal << endl;

    // coba akses variabel global
    cout << namaGlobal << endl;
}

int main() {
    namaVariabel();

    // coba akses variabel global
    cout << namaGlobal << endl;

    // coba akses variabel lokal 
    // cout << namaLokal << endl; // ora iso
}
