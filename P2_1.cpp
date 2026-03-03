#include <iostream>
using namespace std;

float Pi = 3.14159, r;

void input(){
    cout << "Masukan Jari-jari = ";
    cin >> r;
}

float luaslingkaran(float a, float b){
    return Pi * r * r;
}

void output(){
    cout << "Hasilnya = " << luaslingkaran(Pi, r);
}

int main(){
    input();
    output();
}