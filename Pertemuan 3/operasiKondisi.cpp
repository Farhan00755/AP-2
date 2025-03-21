#include <iostream>
using namespace std;

int main () {
    int nilai;

    system("cls");

    cout << "Masukkan nilai : ";
    cin >> nilai;

    //untuk if statement
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // }
    
    // if - else statement
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus!" << endl;
    // } else {
    //     cout << "Anda lulus!" << endl;
    // }

    //if - else if - else statement
    // if (nilai == 100) {
    //     cout << "Anda keceh" << endl;
    // } else if (nilai <= 65) {
    //     cout << "Anda tidak lulus!" << endl;
    // } else {
    //     cout << "Anda lulus!" << endl;
    // }

    //nested if statement
    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus!" << endl;
    // } else {
    //     if (nilai == 100) {
    //         cout << "Anda lulus dan Anda hebat" << endl;
    //     } else {
    //         cout << "Anda lulus!" << endl;
    //     }
    // }

    //switch case statement
    // switch (nilai) {
    //     case 1:
    //         cout << "Senin" << endl;
    //         break;
    //     case 2:
    //         cout << "Selasa" << endl;
    //         break;
    //     case 3:
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4:
    //         cout << "Kamis" << endl;
    //         break;
    //     case 5:
    //         cout << "Jumat" << endl;
    //         break;
    //     case 6:
    //         cout << "Sabtu" << endl;
    //         break;
    //     case 7:
    //         cout << "Minggu" << endl;
    //         break;
    //     default: // selain dari pernyataan yang ada
    //         cout << "Inputan tidak valid" << endl;
    //         break;
    // }

    // switch range statement
    // switch (nilai) {
    //     case 85 ... 100: cout << "A" << endl; break;
    //     case 80 ... 84: cout << "B+" << endl; break;
    //     case 75 ... 79: cout << "B" << endl; break;
    //     case 70 ... 74: cout << "c+" << endl; break;
    //     case 65 ... 69: cout << "c" << endl; break;
    //     case 60 ... 64: cout << "D" << endl; break;
    //     default : cout << "E" << endl; break;
    // }

    //ternary operator
    // if (nilai % 2 == 0) {
    //     cout <<  "Genap sih" << endl;
    // } else {
    //     cout <<  "Ganjil sih" << endl;
    // }
    
    //a > 5 ? 9 : 6
    // string chekNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    // cout << nilai << " tuh bilangan " << chekNum << " sih " << endl;
}    