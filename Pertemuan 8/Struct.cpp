#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Alamat { // deklarasi struct yang dapat menampung banyak tipe data
    string jalan, kota; // deklarasi variabel dengan tipe data string
    int kodePos; // deklarasi variabel dengan tipe data integer
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main() {
    system("cls");

    Mahasiswa mhs1; // deklarasi variabel mhs1 dengan struct Mahasiswa yang berisi banyak tipe data

    // mhs1.nama = "Farhan"; // deklarasi dengan . untuk menunjuk ke variabel mana yang ingin disimpan
    // mhs1.umur = 18;
    // mhs1.ipk = 3.92;

    // mhs1.alamat.jalan = "JL. Pasundan No. 46B";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20118;

    // cout << "Alamat = " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;

    vector <Mahasiswa> mahasiswa; // menggunakan vector untuk memasukkan data mahasiswa yang banyak
    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;
    cout << endl;
    
    for(int i = 0; i < n; i++) { // deklarasi loop for untuk memasukkan data mahasiswa
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // membalikan nilai
        cout << "Masukkan nama = ";
        getline(cin, mhs1.nama);
        cout << "Masukkan umur = ";
        cin >> mhs1.umur;
        cout << "Masukkan ipk = ";
        cin >> mhs1.ipk;
        cout << endl;
        
        mahasiswa.push_back(mhs1); // memasukkan data mahasiswa yang telah diinput kedalam vector
    }
    
    for(int i = 0; i < n; i++) { // deklarasi loop for untuk menampilkan data mahasiswa yang telah diinput
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl; // tata cara pemanggilan struct dalam vector dengan menambahkan [i] untuk mengetahui letak data dalam vector
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
        cout << endl;
    }
    
}
