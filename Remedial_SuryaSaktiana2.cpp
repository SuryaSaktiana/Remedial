#include <iostream>
using namespace std;

void Bilangan(int N) {
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Masukkan nilai N: ";
    cin >> N;
    cout << "Bilangan dari 1 hingga " << N << " adalah: ";
    Bilangan(N);
    return 0;
}
