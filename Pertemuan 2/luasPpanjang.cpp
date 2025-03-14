#include <iostream> 
using namespace std;

int main () {
    system("cls");
    float luas, p, l;

    cout << "masukkan panjang : ";
    cin >> p;

    cout << "masukkan lebar : ";
    cin >> l;

    luas = p * l;
    cout << "Luas = " << luas << endl;

    return 0;
}