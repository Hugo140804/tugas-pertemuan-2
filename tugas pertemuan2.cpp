#include <iostream>
using namespace std;

int main (){
    int n1, n2, n3, total, rata;

    //Langkah 2
    cout << "Masukkan Nilai Tugas 1 : ";
    cin >> n1;

    //Langkah 3
    cout << "Masukkan Nilai Tugas 2: ";
    cin >> n2;

    //Langkah 4
    cout << "Masukkan Nilai Tugas 3: ";
    cin >> n3;
     
    //Langkah 5
    total = n1 + n2 +n3;

    //Langkah 6
    rata = total /3;

    //Langkah 7
    cout << "Total Nilai Tugas : " << total << endl;
    cout << "Rata-rata Nilai Tugas : " << rata << endl;

    return 0;

}