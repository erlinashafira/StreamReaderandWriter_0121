#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main(){
    cout << "Awal program" << endl;
    try {
        array<int, 3> data = {10, 20, 30,};
        cout << data.at(5)<<endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        //akan dieksekusi karna array data hanya memiliki3 elemen
    }
    cout << "Baris Progrm yang terakhir" << endl;
    //penanda 2/ bahwa program berjalan tanpa henti
    //meskipun terjadi kesalahan/
    return 0;
}