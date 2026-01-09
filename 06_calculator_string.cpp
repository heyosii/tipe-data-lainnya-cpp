#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {

    // Ubah string ke int
    long long hasil = stoi(data[0]); // inisialisasi dengan elemen pertama

    for (size_t i = 1; i < data.size(); i++) {
        int nilai = stoi(data[i]); // konversi string ke int
        if (op == '+') {
            hasil += nilai;
        } else if (op == '*') {
            hasil *= nilai;
        } else {
            return "KESALAHAN"; // operator tidak dikenal
        }
    }

    return to_string(hasil); // ubah kembali ke string untuk return
}


// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
   }
