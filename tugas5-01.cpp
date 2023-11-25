#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int batasAwal, batasAkhir;
    cout << "Input Batas Awal: ";
    cin >> batasAwal;
    cout << "Input Batas Akhir: ";
    cin >> batasAkhir;

    int jumlahPrima = 0;
    cout << "Bilangan prima yang ada sebanyak ";
    for (int i = batasAwal + 1; i <= batasAkhir - 1; ++i) {
        if (isPrime(i)) {
            cout << i;
            ++jumlahPrima;
            if (jumlahPrima < batasAkhir - batasAwal + 1) {
                cout << ", ";
            }
        }
    }
    cout << " yaitu " << jumlahPrima << " bilangan." << endl;

    return 0;
}