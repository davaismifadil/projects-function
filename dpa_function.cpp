#include <iostream>
#include <cmath>
using namespace std;

double luaslingkaran(double jari){
return pow(jari,2)*3.14;
}

double luaspersegi(double sisi){
return pow(sisi,2);
}
int main(){
int jari;
cout << "masukkan jari-jari" << endl;
cin >> jari;

cout << "hasilnya adalah : " << luaslingkaran(jari) << endl;


return 0;
}
