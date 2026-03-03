//library
#include <iostream>
using namespace std;

//deklarasi global
int p, l;

// Implementasi Prosuder dan Fungsi
void input(){
    cout << "Masukan Panjang = ";
    cin >> p;
    cout << "Masukan Lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c){
    return a + b + c;
}

int luasPersegi(int a, int b){
    return a * b;
}

void output(){
    cout << "Hasilnya = " << luasPersegi(p, l) << endl;
    cout << "Terima Kasih" << endl;
}

int main(){
    input();
    output();
    cout << "Hasilnya = " << jumlah(56.2, 15.1, 67);
}