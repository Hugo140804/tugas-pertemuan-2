#include <iostream>
using namespace std;

int main() { //mulai
    float n1, n2, n3, total, rata;

    //Langkah 1: Input nilai pertama
    cout << "Masukkan Nilai Matematika: ";
    cin >> n1;

    //Langkah 2: Input nilai kedua
    cout << "Masukkan Nilai Fisika: ";
    cin >> n2;

    //Langkah 3: Input nilai ketiga
    cout << "Masukkan Nilai Kimia: ";
    cin >> n3;

    //Langkah 4: Menghitung total nilai
    total = n1 + n2 + n3;

    //Langkah 5: Menghitung rata-rata
    rata = total / 3;

    //Langkah 6: Menampilkan hasil akhir
    cout << "Rata-rata Nilai Anda: " << rata << endl;

    return 0;
} //selesai
