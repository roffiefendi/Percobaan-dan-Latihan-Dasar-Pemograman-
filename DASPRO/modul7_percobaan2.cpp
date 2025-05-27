#include <fstream>
#include <iostream>
using namespace std;

int main () {
    string baris;

    // membuka file dalam mode menulis.
    ofstream tulisfile;
    // menunjuk ke sebuah nama file
    tulisfile.open("contohfile.txt");

    cout << "=> Menulis file, untuk keluar ketik huruf q " << endl;

    // unlimited loop untuk menulis
    while(true){
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukkan karakter q
        if(baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        tulisfile << baris << endl;
    }

    // selesai dalam menulis sekarang tutup filenya
    tulisfile.close();

    // Membuka file dalam mode membaca
    ifstream bacafile;
    // menunjuk ke sebuah file
    bacafile.open("contohfile.txt");

    cout << endl << "=> Membuka dan membaca file " << endl;
    // jika file ada maka
    if (bacafile.is_open())
    {
        // melakukan perulangan setiap barus
        while (getline(bacafile, baris))
        {
            // dan tampilkan di sini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        bacafile.close();
    }
    // jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Tidak dapat membuka file";

    system("pause");
    return 0;
}