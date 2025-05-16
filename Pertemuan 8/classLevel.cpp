#include<iostream>
using namespace std;

class ContohAkses {
    private: 
        int privateVar;

    protected:
        int protectedVar;

    public:
        int publicVar;

        //constructor
        ContohAkses() {
            privateVar = 1;
            protectedVar = 2;
            publicVar = 3;
        }

    void TampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// kelas turunan
class turunan : public ContohAkses {
    public:
    void aksesProtected() {
        cout << "Akses publicvar " << publicVar << endl;
        cout << "Akses protectedVar " << protectedVar << endl;
        // cout << "Akses privateVar " << privateVar << endl; // gak bisa di akses karena private cuma bisa di akses di classnya sendiri 
    }
};

int main() {
    system("cls");

    ContohAkses obj;
    obj.TampilkanSemua();

    cout << "Akses dari luar kelas " << endl;
    cout << obj.publicVar << endl;
    // cout << obj.privateVar << endl; // hanya bisa diakses pada classnya sendiri
    // cout << obj.protectedVar << endl; // hanya bisa diakses dari classnya sendiri dan turunannya 

    turunan tur;
    tur.aksesProtected();

}