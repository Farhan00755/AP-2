#include <iostream>
using namespace std;

string namaGlobal = "Ilmu";

void namaVariabel() {
    string namaLokal = "Komputer";

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