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

    Mahasiswa mhs1;

    mhs1.nama = "Farhan";
    mhs1.umur = 18;
    mhs1.ipk = 3.92;

    // cout << "nama = " << mhs1.nama << endl;
    // cout << "umur " << mhs1.umur << endl;
    // cout << "ipk = " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1;
    cout << "Nama = " << ptrMhs->nama << endl;
    cout << "Umur = " << ptrMhs->umur << endl;
    cout << "ipk = " << ptrMhs->ipk << endl;

    
}