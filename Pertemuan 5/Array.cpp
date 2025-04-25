#include<iostream>
#include<string>
#include<array>
using namespace std;

int main() {
    // array declaration & initialization
    /* 2 cara membuat array */

    // cara pertama : membuat array kosong
    // string nama[5]; 
    
    // nama[0] = "Farhan";
    // nama[1] = "Fauzan";
    // nama[2] = "dila";
    // nama[3] = "ririn";
    // nama[4] = "nazwa";
    
    // cara kedua : array yang langsung diisi
    // string nama[5] = {"Farhan", "Fauzan", "dila", "ririn", "nazwa"};
    // string nama[] = {"Farhan", "Fauzan", "dila", "ririn", "nazwa"}; halal digunakan

    // ascending  element in array
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    // menggunakan looping
    // for(int i = 0; i < 5; i++) {
    //     cout << nama[i] << endl;
    // }

    // descending element in array use looping
    // for(int i = 4; i >= 0; i--) {
    //     cout << nama[i] << endl;
    // }



    // multidimensional array
    // 1 3 5
    // 2 4 6

    // int matriks[2][3] = {{1, 3, 5},{2, 4, 6}};
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout << matriks[i][j] << "\t";
    //     } 
    //     cout << endl;
    // }

    // int matriks[4][6] = {{1, 5, 1, 3, 11, 9},{2, 4, 6, 8, 10, 12}, {3, 7, 13, 15, 17, 19}, {4, 8, 14, 16, 18, 20}};
    // for(int i = 0; i < 4; i++) {
    //     for(int j = 0; j < 6; j++) {
    //         cout << matriks[i][j] << "\t";
    //     } 
    //     cout << endl;
    // }



    // string (array of characters) // Farhan
    // string nama = "FARHAN";
    // cout << nama[0] << endl; // F
    // cout << nama[5] << endl; // N

    // for(int i = 0; i < 6; i++) {
    //     cout << nama[i] << endl;
    // }


    // string s1 = "Hello";
    // string s2 = "World";

    /* 1. s1 = s2 */
    // s1 = s2;
    // cout << "s1 = " << s1 << endl;

    /* 2. s1 = s1 + s2 */
    // s1 = "Hello";
    // cout << "hasil = " << s1 + s2 << endl;
    // s2 = "World";

    /* 3. s1. length */
    // cout << s1.length() << endl;
    // cout << (s1 + s2).length() << endl;


    /* 4. s1.substr */
    // cout << s1.substr(2, 3) << endl;
    // cout << (s1 + s2).substr(5, 3) << endl;


    // operator sizeof
    // int angka = 10;
    // cout << sizeof(angka);


    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai);

    // string s = "Farhan";
    // cout << sizeof(s);

    

    // array library
    // array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3};
    // cout << "nilai : ";

    // for(int i = 0; i < nilai.size(); i++) {
    //     cout << nilai[i] << " ";
    // }

    // for (float n : nilai) {
    //     cout << n << " ";
    // }



}