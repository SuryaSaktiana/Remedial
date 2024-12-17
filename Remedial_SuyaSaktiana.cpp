#include <iostream>
using namespace std;


bool Genap(int bilangan) {
    return bilangan % 2 == 0;
}

int main() {
    int bilangan;

    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    if (Genap(bilangan)) {
        cout << bilangan << " adalah bilangan genap." ;
    } else {
        cout << bilangan << " adalah bilangan ganjil." ;
    }

}
