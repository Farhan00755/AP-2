#include<iostream>
using namespace std;

class ContohAkses { // deklarasi kelas untuk membagi tingkat variabel
    private: // variabelnya hanya dapat diakses di dalam kelas yang sama
        int privateVar;

    protected: // variabelnya hanya dapat diakses di dalam kelas yang sama dan kelas turunannya
        int protectedVar;

    public: // variabelnya dapat diakses dari mana saja
        int publicVar;

        //constructor
        ContohAkses() { // memasukkan  nilai kedalam variabel yang telah dideklarasi
            privateVar = 1; 
            protectedVar = 2;
            publicVar = 3;
        }

    void TampilkanSemua() { // fungsi untuk menampilkan nilainya
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl; // dapat diakses karena masih berada dalam kelas yang sama
        cout << protectedVar << endl; // dapat diakses
        cout << publicVar << endl; // dapat diakses
    }
};

// kelas turunan
class turunan : public ContohAkses {
    public:
    void aksesProtected() {
        cout << "Akses publicvar " << publicVar << endl; // dapat diakses
        cout << "Akses protectedVar " << protectedVar << endl; // dapat diakses karena ini adalah kelas turunannya
        // cout << "Akses privateVar " << privateVar << endl; // gak bisa di akses karena private cuma bisa di akses di classnya sendiri 
    }
};

int main() {
    system("cls");

    ContohAkses obj; // deklarasi variabel obj dengan tipe data kelas ContohAkses
    obj.TampilkanSemua(); // memanggil kelas

    cout << "Akses dari luar kelas " << endl;
    cout << obj.publicVar << endl; // dapat diakses darimana saja
    // cout << obj.privateVar << endl; // hanya bisa diakses pada classnya sendiri
    // cout << obj.protectedVar << endl; // hanya bisa diakses dari classnya sendiri dan turunannya 

    turunan tur; // deklarasi variabel tur dengan tipe data turunan dari kelas 
    tur.aksesProtected(); // memanggil kelas turunan
}
