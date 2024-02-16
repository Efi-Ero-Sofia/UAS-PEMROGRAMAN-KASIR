#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi variabel
    string nama_barang = "BUKU";
    int jumlah_barang = 5;
    double harga_barang = 50000;
    double total_pembelian, diskon, total_setelah_diskon;

    // Menghitung total pembelian
    total_pembelian = jumlah_barang * harga_barang;

    // Menghitung diskon
    diskon = 0.02 * total_pembelian;

    // Menghitung total setelah diskon
    total_setelah_diskon = total_pembelian - diskon;

    // Output
    cout << "Nama Barang: " << nama_barang << endl;
    cout << "Jumlah Barang: " << jumlah_barang << endl;
    cout << "Harga Barang: Rp " << harga_barang << endl;
    cout << "Total Pembelian: Rp " << total_pembelian << endl;
    cout << "Diskon 2%: Rp " << diskon << endl;
    cout << "Total Setelah Diskon: Rp " << total_setelah_diskon << endl;

    return 0;
}
