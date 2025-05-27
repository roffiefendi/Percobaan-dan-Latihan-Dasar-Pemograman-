#include <iostream>
#include <fstream>
using namespace std;

int main() {
    float penjualan, modal;

    // Input manual dari keyboard
    cout << "Masukkan total penjualan: Rp";
    cin >> penjualan;
    cout << "Masukkan modal: Rp";
    cin >> modal;

    float laba = penjualan - modal;

    // Tulis hasil ke file output.txt
    ofstream outputFile("LABA PENJUALAN.txt");
    if (!outputFile) {
        cerr << "Gagal membuka file LABA PENJUALAN.txt" << endl;
        return 1;
    }

    outputFile << "=== LAPORAN PENJUALAN ===" << endl;
    outputFile << "Total Penjualan : Rp" << penjualan << endl;
    outputFile << "Modal           : Rp" << modal << endl;
    outputFile << "Laba            : Rp" << laba << endl;

    outputFile.close();

    cout << "Hasil disimpan di 'LABA PENJUALAN'" << endl;
    return 0;
}