#include <iostream>
#include <fstream>
using namespace std;

int main() {
    float berat, kebutuhan_air;


    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    if (!infile) {
        cerr << "Gagal membuka file input.txt\n";
        return 1;
    }

    // Baca input
    infile >> berat;
    infile >> kebutuhan_air;

    // Tampilkan isi file input ke terminal
    cout << "Isi file input.txt:\n";
    cout << "berat badan   : " << berat << endl;
    cout << "kebutuhan air: " << kebutuhan_air << endl;

    // Hitung usia
    kebutuhan_air = berat * 0.03;

    // Tampilkan hasil ke terminal dan simpan ke file
    cout << "kebutuhan air anda adalah : " << kebutuhan_air << " liter" << endl;
    outfile << "kebutuhan air anda adalah : " << kebutuhan_air << " liter" << endl;

    infile.close();
    outfile.close();

    return 0;
}