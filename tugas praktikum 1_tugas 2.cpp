#include <iostream>
using namespace std;

int main(){
    //TUGAS 2
    //Menggunakan Variabel Sementara
    int a = 6;
    int b = 8;

    int c = a;
    a = b;
    b = c;

    cout << "Menggunakan Variabel Sementara" << endl;
    cout << "Hasil a = " << a << endl;
    cout << "Hasil b = " << b << endl;


return 0;
}
