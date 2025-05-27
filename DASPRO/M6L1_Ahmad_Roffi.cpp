#include <iostream>
#include <string>

using namespace std;

int main() {
    string username, password;
    string correctUsername = "admin";
    string correctPassword = "12345";
    int attempts = 0;
    const int maxAttempts = 3;

    while (attempts < maxAttempts) {
        cout << "Masukkan Username: ";
        cin >> username;
        cout << "Masukkan Password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "Login berhasil!\n";
            break; // keluar dari loop jika login berhasil
        } else {
            attempts++;
            cout << "Username atau password salah. Percobaan ke-" << attempts << " dari " << maxAttempts << ".\n";
            
            if (attempts == maxAttempts) {
                cout << "Anda telah 3 kali salah login. Program akan keluar.\n";
            }
        }
    }

    system("pause");
    return 0;
}
