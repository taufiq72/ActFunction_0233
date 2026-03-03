//library
#include <iostream>
using namespace std;

//deklarasi global
int p, l, luas;

// Implementasi Prosuder dan Fungsi
void input(){
    cout << "Masukan Panjang = ";
    cin >> p;
    cout << "Masukan Lebar = ";
    cin >> l;
}

int luasPersegi(){
    return p * l;
}

void output(){
    cout << "Hasilnya = " << luasPersegi() << endl;
    cout << "Terima Kasih";
}

int main(){
    input();
    output();
}