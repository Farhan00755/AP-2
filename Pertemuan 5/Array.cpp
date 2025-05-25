#include<iostream>
#include<string> // header untuk operasi string
#include<array> // header untuk array
using namespace std;

int main() {
    // array declaration & initialization
    /* 2 cara membuat array */

    // cara pertama : membuat array kosong
    // string nama[5]; // deklarasi
    
    // nama[0] = "Farhan";
    // nama[1] = "Fauzan";
    // nama[2] = "dila";
    // nama[3] = "ririn";
    // nama[4] = "nazwa";
    
    // cara kedua : array yang langsung diisi
    // string nama[5] = {"Farhan", "Fauzan", "dila", "ririn", "nazwa"};
    // string nama[] = {"Farhan", "Fauzan", "dila", "ririn", "nazwa"}; // string tidak memiliki batasan 

    // ascending  element in array
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    // menggunakan looping
    // for(int i = 0; i < 5; i++) {
    //     cout << nama[i] << endl; // menampilkan string dalam array dari paling awal
    // }

    // descending element in array use looping
    // for(int i = 4; i >= 0; i--) {
    //     cout << nama[i] << endl; // menampilkan string dalam array nama dari paling akhir 
    // }



    // multidimensional array
    // 1 3 5
    // 2 4 6

    // int matriks[2][3] = {{1, 3, 5},{2, 4, 6}}; // deklarasi array 2 dimensi
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout << matriks[i][j] << "\t"; menggunakan nested for untuk menampilkan matriks dan "\t" untuk merapihkan tampilan
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
    // string nama = "FARHAN"; // deklarasi variabel nama
    // cout << nama[0] << endl; // F
    // cout << nama[5] << endl; // N

    // for(int i = 0; i < 6; i++) {
    //     cout << nama[i] << endl; // menampilkan string dalam variabel nama mulai dari i = 0 (F) hingga i = 5 (N)
    // }


    // string s1 = "Hello";
    // string s2 = "World";

    /* 1. s1 = s2 */
    // s1 = s2; // merubah isi s1 menjadi world
    // cout << "s1 = " << s1 << endl;

    /* 2. s1 = s1 + s2 */
    // s1 = "Hello";
    // cout << "hasil = " << s1 + s2 << endl; // menambahkan s1 dengan s2 sehingga menjadi helloWorld tanpa spasi
    // s2 = "World";

    /* 3. s1. length */
    // cout << s1.length() << endl; // menampilkan panjang array s1 "Hello" (5)
    // cout << (s1 + s2).length() << endl; // menampilkan panjang array s1 "HelloWorld" (10)


    /* 4. s1.substr */
    // cout << s1.substr(2, 3) << endl; // menampilkan string dari s1 "hello" dari kata ke 2 sebanyak 3 kata (kata ke 2 itu l karna dihitung dari 0 dan 3 kata llo)
    // cout << (s1 + s2).substr(5, 3) << endl; // menampilkan string s1+s2 dari kata ke 5 sebanyak 3 kata "HelloWorld" (kata ke 5 itu w dan 3 kata wor)


    // operator sizeof
    // int angka = 10;
    // cout << sizeof(angka); // sizeof itu untuk mengetahui ukuran byte setiap data, dan setiap data memiliki ukuran byte berbeda seperti ukuran byte angka 10 adalah 4


    // int nilai[] = {10, 20, 30, 40, 50}; 
    // cout << sizeof(nilai);

    // string s = "Farhan";
    // cout << sizeof(s); // menampilkan ukuran byte dari 6 karakter

    

    // array library
    // array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3}; // deklarasi array dengan tipe data float dengan ukuran 5 data
    // cout << "nilai : ";

    // for(int i = 0; i < nilai.size(); i++) { // loop dari i = 0 sampai i lebih kecil dari ukuran array nilai
    //     cout << nilai[i] << " ";
    // }

    // for (float n : nilai) { // pendeklarasian loop for secara singkat
    //     cout << n << " ";
    // }

}
