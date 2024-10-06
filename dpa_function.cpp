#include <iostream>
#include <cmath>
using namespace std;

double luaslingkaran(double jari){
return pow(jari,2)*3.14;
}

double luaspersegi(double sisi){
return pow(sisi,2);
}

double luasSegitiga (double alas, double tinggi) {
    return 0.5 * alas * tinggi;
}
float luasJajargenjang (float alas, float tinggi) {
    return alas * tinggi;
}

double luasTrapesium(double a, double b, double tinggi) {
    return 0.5 * (a + b) * tinggi;
}

double luasBelahKetupat(double diagonal1, double diagonal2) {
    return 0.5 * diagonal1 * diagonal2;
}


    
int main(){
int jari;
cout << "masukkan jari-jari" << endl;
cin >> jari;

cout << "hasilnya adalah : " << luaslingkaran(jari) << endl;

    double alas, tinggi, luas;
    cout << "Masukkan panjang alas segitiga : " ;
    cin >> alas;
    cout << "Masukkan tinggi segitiga : " ;
        cin >> tinggi;
    luas = luasSegitiga (alas, tinggi);
        cout << "Luas segitiga adalah : " << luas <<endl ;

        cout << "Masukkan panjang alas jajar genjang : " ;
        cin >> alas;
        cout << "Masukkan tinggi jajar genjang : " ;
            cin >> tinggi;
        luas = luasJajargenjang (alas, tinggi) ;
        cout << " Luas jajar genjang adalah " << luas << endl;
        

    double a, b, tinggii, diagonal1, diagonal2;

    cout << "Masukkan panjang sisi sejajar dari trapesium (a dan b): ";
    cin >> a >> b;
    cout << "Masukkan tinggi dari trapesium: ";
    cin >> tinggi;

    double luas_trapesium = luasTrapesium(a, b, tinggi);
    cout << "Luas trapesium adalah: " << luas_trapesium << endl;

    cout << "\nMasukkan panjang diagonal 1 dari belah ketupat: ";
    cin >> diagonal1;
    cout << "Masukkan panjang diagonal 2 dari belah ketupat: ";
    cin >> diagonal2;

    double luas_belah_ketupat = luasBelahKetupat(diagonal1, diagonal2);
    cout << "Luas belah ketupat adalah: " << luas_belah_ketupat << endl;

return 0;
}
