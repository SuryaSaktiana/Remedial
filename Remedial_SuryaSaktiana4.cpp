#include <iostream>
using namespace std;

int Perkalian(int a, int b) {
    return a * b;
}

int main() {
    int angka1, angka2;
    cout << "Masukkan bilangan pertama: ";
    cin >> angka1;
    cout << "Masukkan bilangan kedua: ";
    cin >> angka2;

    cout << "Hasil kali dari " << angka1 << " dan " << angka2 << " adalah: " << Perkalian(angka1, angka2);
}
