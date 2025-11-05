#include <iostream>
using namespace std;

double hitungRataRata(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return (double) total / n;
}

void outputStatus(double rata) {
    if (rata >= 70)
        cout << "Status : LULUS" << endl;
    else
        cout << "Status : TIDAK LULUS" << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah nilai: ";
    cin >> n;

    int nilai[n];

    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    double rata = hitungRataRata(nilai, n);
    cout << endl;
    cout << "Rata-rata: " << rata << endl;
    outputStatus(rata);
    return 0;
}