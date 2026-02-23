#include <iostream>
using namespace std;

int main() { //mulai
    double harga_barang, jumlah, total_awal, diskon, harga_akhir;

    //Langkah 1: Input harga satuan barang
    cout << "Masukkan Harga Barang: ";
    cin >> harga_barang;

    //Langkah 2: Input jumlah barang yang dibeli
    cout << "Masukkan Jumlah Barang: ";
    cin >> jumlah;

    //Langkah 3: Hitung total harga sebelum diskon
    total_awal = harga_barang * jumlah;

    //Langkah 4: Hitung nilai diskon (misal 10%)
    diskon = total_awal * 0.1;

    //Langkah 5: Hitung harga setelah dipotong diskon
    harga_akhir = total_awal - diskon;

    //Langkah 6: Tampilkan rincian pembayaran
    cout << "Total Belanja: Rp " << total_awal << endl;
    cout << "Potongan (10%): Rp " << diskon << endl;
    cout << "Total Bayar: Rp " << harga_akhir << endl;

    return 0;
} //selesai