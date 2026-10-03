// MINI PROJEK 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
using namespace std;

// Array Global untuk daftar menu dan harga
string daftarMenu[3] = { "Kopi Hitam", "Es Teh Manis", "Roti Bakar" };
int daftarHarga[3] = { 5000, 3000, 8000 };

// FUNGSI 1: Menampilkan daftar menu (Fungsi Void + Perulangan + Array)
void tampilkanMenu() {
    cout << "=== DAFTAR MENU WARUNG KOPI ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "[" << i + 1 << "] " << daftarMenu[i] << " - Rp" << daftarHarga[i] << endl;
    }
    cout << "===============================" << endl;
}

// FUNGSI 2: Menghitung total harga (Fungsi Mengembalikan Nilai + Percabangan + Array)
int hitungTotal(int pilihan, int jumlah) {
    if (pilihan >= 1 && pilihan <= 3) {
        return daftarHarga[pilihan - 1] * jumlah;
    }
    else {
        return 0; // Jika pilihan menu tidak ada
    }
}

int main() {
    int repeat = 1;

    // PERULANGAN: Agar aplikasi bisa digunakan secara terus-menerus
    while (repeat == 1) {
        // Memanggil Fungsi Tampil Menu
        tampilkanMenu();

        int pilihan, jumlah;

        // INPUT: Meminta input menu dan jumlah dari pengguna
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;
        cout << "Masukkan jumlah porsi: ";
        cin >> jumlah;

        // Memanggil Fungsi Hitung Total
        int totalBayar = hitungTotal(pilihan, jumlah);

        // PERCABANGAN: Cek apakah input valid atau tidak
        if (totalBayar > 0) {
            // OUTPUT: Menampilkan rincian pesanan
            cout << "\n--- RINCIAN PESANAN ---" << endl;
            cout << "Menu  : " << daftarMenu[pilihan - 1] << endl;
            cout << "Total : Rp" << totalBayar << endl;
            cout << "-----------------------" << endl;
        }
        else {
            cout << "\n[Pilihan menu tidak valid!]" << endl;
        }

        // INPUT: Fitur pengulangan aplikasi
        cout << "\nIngin transaksi lagi? [1: Ya / 0: Tidak]: ";
        cin >> repeat;
        cout << endl;
    }

    cout << "Terima kasih telah menggunakan aplikasi kasir!" << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
