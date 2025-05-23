#include <iostream> // header untuk cpp
using namespace std; // memudahkan pengkodingan agar tidak mendeklarasikan std:: lagi

int main() {
    int bil;
    system("cls"); // untuk menghapus yang tidak penting pada terminal agar terlihat bersih 
    
    cout << "Masukkan bilangan : ";
    cin >> bil;

    if (bil % 5 == 0 && bil % 10 == 0) { // jika sisa bagi bil mod 5 sama dengan 0 dan sisa bagi bil mod 10 sana dengan 0 menjalankan perintah yang dibawah
        cout << "Bilangan " << bil << " adalah kelipatan 10 dan 5" << endl;
    } else if (bil % 10 == 0) { // jika sisa bagi bil mod 10 sana dengan 0 menjalankan perintah yang dibawah
        cout << "Bilangan " << bil << " adalah kelipatan 10" << endl;
    } else if (bil % 5 == 0) { // jika sisa bagi bil mod 0 sana dengan 0 menjalankan perintah yang dibawah
        cout << "Bilangan " << bil << " adalah kelipatan 5" << endl;
    } else { // jika tidak memenuhi ketiga syarat diatas
        cout << "Bilangan " << bil << " bukan kelipatan 5 atau 10" << endl;
    }
}
