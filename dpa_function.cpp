#include <iostream>
#include <cmath>
using namespace std;

double luaslingkaran(double jari){
return pow(jari,2)*3.14;
}

double luaspersegi(double sisi){
return pow(sisi,2);
}

double luasSegitiga(double alas, double tinggi) {
    return 0.5 * alas * tinggi;
}

float luasJajarGenjang(float alas, float tinggi) {
    return alas * tinggi ;
}
int main(){
int jari;
cout << "masukkan jari-jari" << endl;
cin >> jari;

cout << "hasilnya adalah : " << luaslingkaran(jari) << endl;

  double alas, tinggi, luas;

    cout << "Masukkan panjang alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    luas = luasSegitiga(alas, tinggi);
    cout << "Luas segitiga adalah: " << luas << endl;
     
    cout << "Masukkan panjang alas jajargenjang : ";
    cin >> alas;
    cout << "Masukkan tinggi jajar genjang : " ;
    cin >> tinggi;
    
    luas = luasJajarGenjang(alas, tinggi) ;
    cout << "Luas jajargenjang : " << luas << endl;
    

return 0;
}
