#include <iostream>
using namespace std;

int totalHadir = 0;

void updateTotalHadir(int hadir) {
    totalHadir += hadir;
}

double persentaseKehadiran(int totalPertemuan, int jumlahMahasiswa) {
    int totalMaksimal = totalPertemuan * jumlahMahasiswa;
    double rasio = (double) totalHadir / totalMaksimal * 100.0;
    return rasio;
}

void totalKehadiran(int totalPertemuan, int jumlahMahasiswa) {
    int totalMaksimal = totalPertemuan * jumlahMahasiswa;

    cout << endl;
    cout << "Total kehadiran kelas : " << totalHadir 
         << " dari " << totalMaksimal << endl;

    double rasio = persentaseKehadiran(totalPertemuan, jumlahMahasiswa);
    cout << "Persentase kehadiran : " << rasio << " %" << endl;
}

int main() {
    int jumlahMahasiswa, totalPertemuan, hadir;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    cout << "Masukkan total pertemuan: ";
    cin >> totalPertemuan;

    for (int i = 1; i <= jumlahMahasiswa; i++) {
        cout << "Kehadiran mahasiswa ke-" << i << ": ";
        cin >> hadir;

        updateTotalHadir(hadir);
    }

    totalKehadiran(totalPertemuan, jumlahMahasiswa);

    return 0;
}