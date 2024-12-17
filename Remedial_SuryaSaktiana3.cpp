#include <iostream>
using namespace std;

int Bilangan(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int N;
    cout << "Masukkan nilai N: ";
    cin >> N;
    cout << "Jumlah bilangan genap dari 1 hingga " << N << " adalah: " << Bilangan(N) << endl;
    return 0;
}
