#include <fstream>
#include <iostream>
using namespace std;

int main() {
    string baris;
    int i, data[5] = {3, 5, 2, 14, 6};

    // membuka file dalam mode menulis.
    // menunjuk ke sebuah nama file
    ofstream tulisfile;
    tulisfile.open("contoh.txt");

    for (i = 0; i < 5; i++) {
        cout << "Menulis bilangan " << data[i] << " ke dalam file" << endl;
        tulisfile << data[i] << endl;
    }

    // selesai dalam menulis sekarang tutup filenya
    tulisfile.close();

    // Membuka file dalam mode membaca
    ifstream bacafile;
    // menunjuk ke sebuah file
    bacafile.open("contoh.txt");

    cout << endl << "=> Membuka dan membaca file " << endl;

    // jika file ada maka
    if (bacafile.is_open()) {
        // melakukan perulangan setiap baris
        while (getline(bacafile, baris)) {
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

