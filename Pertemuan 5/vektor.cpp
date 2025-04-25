#include <iostream>
#include <vector>

using namespace std;

int main() {
    // vector declaratioon & initialization
    vector<string> nama_karyawan = {"Farhan", "Fauzan", "dion", "tessa", "riko"};

    //ascending element of vector
    // for(int i = 0; i < nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    // for(string karyawan : nama_karyawan) {
    //     cout << karyawan << endl;
    // }
    
    
    // add data to vector
    nama_karyawan.push_back("imam");

    // for(string karyawan : nama_karyawan) {
    //     cout << karyawan << endl;
    // }
    
    
    // delete data from vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3);
 
    for(string karyawan : nama_karyawan) {
        cout << karyawan << endl;
    }
}