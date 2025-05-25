#include <iostream>
#include <vector> // header untuk vector

using namespace std;

int main() {
    // vector declaratioon & initialization
    vector<string> nama_karyawan = {"Farhan", "Fauzan", "dion", "tessa", "riko"}; // deklarasi

    //ascending element of vector
    // for(int i = 0; i < nama_karyawan.size(); i++) { // menampilkan data dalam vector sampai i lebih kecil dari ukuran data vector
    //     cout << nama_karyawan[i] << endl;
    // }

    // for(string karyawan : nama_karyawan) { // deklarasi secara singkat
    //     cout << karyawan << endl;
    // }
    
    
    // add data to vector
    nama_karyawan.push_back("imam"); // menambahkan data kedalam vector

    // for(string karyawan : nama_karyawan) {
    //     cout << karyawan << endl;
    // }
    
    
    // delete data from vector
    nama_karyawan.pop_back(); // menghapus data terakhir vector
    nama_karyawan.erase(nama_karyawan.begin() + 3); // menghapus data dari vector dengan menunjuk data pertama dalam vector dan + 3 untuk menunjuk ke data yan ingin dihapus
 
    for(string karyawan : nama_karyawan) {
        cout << karyawan << endl;
    }
    
}
