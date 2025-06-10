#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string NamaFile;
    cout << "Masukkan Nama File :";
    cin >> NamaFile;
    //membuka file dalam mode menulis.
    fstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis file \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis
    while (true){
        cout << "- ";
        //mendapatkan setiap karakter dlaam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari 'baris' ke dlaam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();
    
}