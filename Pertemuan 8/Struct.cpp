#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Alamat {
    string jalan, kota;
    int kodePos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main() {
    system("cls");

    Mahasiswa mhs1;

    // mhs1.nama = "Farhan";
    // mhs1.umur = 18;
    // mhs1.ipk = 3.92;

    // mhs1.alamat.jalan = "JL. Pasundan No. 46B";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20118;

    // cout << "Alamat = " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;

    vector <Mahasiswa> mahasiswa;
    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;
    cout << endl;
    
    for(int i = 0; i < n; i++) { 
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "Masukkan nama = ";
        getline(cin, mhs1.nama);
        cout << "Masukkan umur = ";
        cin >> mhs1.umur;
        cout << "Masukkan ipk = ";
        cin >> mhs1.ipk;
        cout << endl;
        
        mahasiswa.push_back(mhs1);
    }
    
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
        cout << endl;
    }
}