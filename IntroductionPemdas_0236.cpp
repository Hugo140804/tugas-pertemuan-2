#include <iostream>
using namespace std;

void input(double &d1, double &d2) {
    d1 = 10; 
    d2 = 8;   
}

double hitungLuas(double d1, double d2) {
    return 0.5 * d1 * d2;
}

void output(double d1, double d2, double luas) {
    cout << "Perhitungan luas belah ketupat " << endl;
    cout << "Diagonal 1 = " << d1 << endl;
    cout << "Diagonal 2 = " << d2 << endl;
    cout << "Luas       = " << luas << endl;
}

int main() {
    double d1, d2, luas;

    input(d1, d2);             
    luas = hitungLuas(d1, d2);  
    output(d1, d2, luas);       

    return 0;
}
