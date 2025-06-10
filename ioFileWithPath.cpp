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
    //membuka file dalam mode membaca
    ifstream infile;
    infile.open(NamaFile, ios::in);
    cout << endl << ">= Membuka dan membaca file " << endl;

    if (infile.is_open())
    {
        while (getline(infile, baris))
        {
            cout << baris << '\n';
        }
        infile.close();
    }
    else cout << "Unable to open file";
    return 0;
}