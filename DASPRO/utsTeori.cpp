#include <iostream>
using namespace std;

int main() {
    int n = 5; // jumlah elemen, bisa diganti sesuai kebutuhan
    int data[n];

    // Input data
    cout << "Masukkan " << n << " bilangan: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    // Proses insertion sort
    for (int i = 1; i < n; i++) {
        int key = data[i];
        int j = i - 1;

        // Pindahkan elemen yang lebih besar dari key ke satu posisi di depan
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }

    // Output hasil pengurutan
    cout << "Hasil pengurutan (ascending): ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
