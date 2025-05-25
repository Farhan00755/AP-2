#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i;

    system("cls");

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    for (i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') { // looping ini hanya merubah kalimat i jika kalimatnya a,i,u,e,o atau kalimat vokal selebihnya tidak diubah
            kalimat[i] = toupper(kalimat[i]);
        }
    }

    cout << "Hasil: " << kalimat << endl;

    return 0;
    
}
