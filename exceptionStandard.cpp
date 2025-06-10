#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main(){
    cout << "Awal program" << endl;
    try {
        array<int, 3> data = (10,20,30);
        cout << data.at(5)<<endl;
    }
    catch (exception& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        //akan dieksekusi karna array data hanya memiliki3 elemen
    }
    cout << "Baris Progrm yang terakhir" << endl;
    return 0;
}