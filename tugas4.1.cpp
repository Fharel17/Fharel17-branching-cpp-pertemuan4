#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    // Menampilkan deret Fibonacci
    int a = 0, b = 1;

    cout << "Deret Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}
