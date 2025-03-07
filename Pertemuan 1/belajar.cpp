#include <iostream> // header untuk c++
#include <conio.h> // header untuk getch() dan getche()
using namespace std;

int main() {

    string nama;
    char kom, jenis_kelamin;
    int nim;
    float ip;

    /*ini untuk komen
    beberapa baris*/

    cout << "Hello World"<<endl;

    //input
    cout << "Masukkan nama anda: ";
    // cin >> nama;
    getline(cin, nama); // agar karakter space bisa terbaca
    cout<< "masukkan kom anda: ";
    cin >> kom;

    cout << "Masukkan NIM anda: ";
    cin >> nim;

    cout << "Masukkan IP anda: ";
    cin >> ip;

    cout << "Masukkan jenis kelamin anda: (L/P)";
    jenis_kelamin = getche(); // agar karakter lgsg tampil tanpa enter
    cout<<endl;

    /*untuk output*/
    cout<<nama<<endl;
    cout<<kom<<endl;
    cout<<nim<<endl;
    cout<<ip<<endl;
    putchar(jenis_kelamin); // untuk menampilkan karakter yang diinput sebelumnya dengan getche()

    getch(); // karakter yang diketik tidak akan muncul dan tidak perlu di enter
}