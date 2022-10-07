#include <iostream>
using namespace std;

int main(){
    //TUGAS 1
    string namalengkap = "Fitri Akmaliah";
    string npm = "2210631170020";
    int umur = 17;
    string kelas = "1C Informatika";
    string hobi = "Membaca AU";
    string cita = "Dosen";

    cout << "Nama Lengkap   :" << namalengkap << endl;
    cout << "NPM            :" << npm << endl;
    cout << "Umur           :" << umur << endl;
    cout << "Kelas          :" << kelas << endl;
    cout << "Hobi           :" << hobi << endl;
    cout << "Cita           :" << cita << endl;

    //TUGAS
    //Menggunakan Variabel Sementara
    int a = 6;
    int b = 8;

    int c = a;
    a = b;
    b = c;

    cout << "Menggunakan Variabel Sementara" << endl;
    cout << "Hasil a = " << a << endl;
    cout << "Hasil b = " << b << endl;

    //Tidak menggunakan variabel sementara
    int a1 = 8;
    int b1 = 4;

    a1 = a1 - b1;
    b1 = a1 + b1;
    a1 = b1 - a1;

    cout << "Tidak menggunakan variabel sementara" << endl;
    cout << "Hasil a = " << a1 << endl;
    cout << "Hasil b = " << b1 << endl;



return 0;
}
