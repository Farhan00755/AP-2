#include<iostream>
#include<string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    system("cls");

    Mahasiswa mhs1; // deklarasi variabel mhs1 dengan struct Mahasiswa 

    mhs1.nama = "Farhan";
    mhs1.umur = 18;
    mhs1.ipk = 3.92;

    // cout << "nama = " << mhs1.nama << endl;
    // cout << "umur " << mhs1.umur << endl;
    // cout << "ipk = " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1; // deklarasi pointer mahasiswa yang berisi alamat mhs1 dengan tipe data struct Mahasiswa
    cout << "Nama = " << ptrMhs->nama << endl; // tata cara pemanggilan struct dengan pointer dengan menggunakan garis panah ->
    cout << "Umur = " << ptrMhs->umur << endl;
    cout << "ipk = " << ptrMhs->ipk << endl;
    
}
