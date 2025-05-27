#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // a. Variabel
    int pilihan, jumlah,harga, total = 0;
    string namaMenu;
    char ulang;

    // f. Operasi File - buka file untuk menulis pesanan
    ofstream fileOut("pesanan.txt");
    fileOut << "=== Rincian Pesanan ===\n";

    cout << "=== Menu Makanan ===" << endl;
    cout << "1. Nasi Goreng     - Rp 15000" << endl;
    cout << "2. Mie Ayam        - Rp 12000" << endl;
    cout << "3. Sate Ayam       - Rp 18000" << endl;
    cout << "4. Bakso           - Rp 13000" << endl;

    // e. Perulangan
    do {
        // b. Input
        cout << "\nPilih menu (1-4): ";
        cin >> pilihan;

        cout << "Jumlah porsi: ";
        cin >> jumlah;

        // d. Percabangan + c. Operator Aritmatik
        switch(pilihan) {
            case 1:
                namaMenu = "Nasi Goreng";
                harga = 15000;
                break;
            case 2:
                namaMenu = "Mie Ayam";
                harga = 12000;
                break;
            case 3:
                namaMenu = "Sate Ayam";
                harga = 18000;
                break;
            case 4:
                namaMenu = "Bakso";
                harga = 13000;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                continue;
        }

        int subtotal = harga * jumlah;
        total += subtotal;

        // b. Output
        cout << namaMenu << " x " << jumlah << " = Rp " << subtotal << endl;

        // f. Tulis ke file
        fileOut << namaMenu << " x " << jumlah << " = Rp " << subtotal << endl;

        // Ulangi?
        cout << "Tambah pesanan lain? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    // b. Output total
    cout << "\nTotal yang harus dibayar: Rp " << total << endl;
    fileOut << "-------------------------" << endl;
    fileOut << "Total bayar: Rp " << total << endl;
    fileOut.close();

    cout << "Pesanan telah disimpan di file 'pesanan.txt'" << endl;

    return 0;
}
