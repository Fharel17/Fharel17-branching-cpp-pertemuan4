#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk memeriksa apakah suatu bilangan adalah bilangan prima
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Fungsi untuk menampilkan faktor dari suatu bilangan
void printFactors(int n) {
    cout << "Faktor dari " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int batas;

    cout << "Masukkan batas: ";
    cin >> batas;

    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;
    vector<int> ganjil, genap, prima;

    // Mencari bilangan ganjil, genap, dan prima
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            genap.push_back(i);
            jumlahGenap += i;
        } else {
            ganjil.push_back(i);
            jumlahGanjil += i;
        }

        if (isPrime(i)) {
            prima.push_back(i);
            jumlahPrima += i;
        }
    }

    // Menampilkan bilangan ganjil
    cout << "Bilangan Ganjil: ";
    for (int n : ganjil) {
        cout << n << " ";
    }
    cout << "\nJumlah Bilangan Ganjil: " << jumlahGanjil << endl;
    for (int n : ganjil) {
        printFactors(n);
    }

    // Menampilkan bilangan genap
    cout << "Bilangan Genap: ";
    for (int n : genap) {
        cout << n << " ";
    }
    cout << "\nJumlah Bilangan Genap: " << jumlahGenap << endl;
    for (int n : genap) {
        printFactors(n);
    }

    // Menampilkan bilangan prima
    cout << "Bilangan Prima: ";
    for (int n : prima) {
        cout << n << " ";
    }
    cout << "\nJumlah Bilangan Prima: " << jumlahPrima << endl;
    for (int n : prima) {
        printFactors(n);
    }

    return 0;
}
