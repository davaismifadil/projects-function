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
    char keputusan;
    do{
    cout << "1.Luas lingkaran" << endl;
    cout << "2.Luas persegi" << endl;
    cout << "3.Luas segitiga" << endl;
    cout << "4.Luas jajar genjang" << endl;
    cout << "5.Luas trapesium" << endl;
    cout << "6.Luas belah ketupat" << endl;
    cout << "\n";
    int pilihan;
    cout << "masukkan angka pilihan"<< endl;
    cin >> pilihan;

if(pilihan == 1){   
double jari;
cout << "masukkan jari-jari lingkaran : " << endl;
cin >> jari;

cout << "hasilnya adalah : " << luaslingkaran(jari) << endl;
    cout << "berhitung lagi?(y/n)" << endl;
    cin >> keputusan;
}
if (pilihan == 2){
    double sisi;
        cout << "masukkan sisi" <<endl;
        cin >> sisi;
        cout << "Hasilnya adalah : "<< luaspersegi(sisi) << endl;
        cout << "berhitung lagi?(y/n)" << endl;
    cin >> keputusan;
}
    if(pilihan == 3){
    double alas, tinggi, luas;
    cout << "Masukkan panjang alas segitiga : " ;
    cin >> alas;
    cout << "Masukkan tinggi segitiga : " ;
        cin >> tinggi;
    luas = luasSegitiga (alas, tinggi);
        cout << "Luas segitiga adalah : " << luas <<endl;
        cout << "berhitung lagi?(y/n)" << endl;
    cin >> keputusan;
    }
    if(pilihan == 4){
        double alas,tinggi,luas;
        cout << "Masukkan panjang alas jajar genjang : " ;
        cin >> alas;
        cout << "Masukkan tinggi jajar genjang : " ;
        cin >> tinggi;
        luas = luasJajargenjang (alas, tinggi) ;
        cout << " Luas jajar genjang adalah " << luas << endl;
   cout << "berhitung lagi?(y/n)" << endl;
    cin >> keputusan;
    }
if(pilihan == 5){
    double a, b, tinggi;

    cout << "Masukkan panjang sisi sejajar dari trapesium (a dan b): ";
    cin >> a >> b;
    cout << "Masukkan tinggi dari trapesium: ";
    cin >> tinggi;

    double luas_trapesium = luasTrapesium(a, b, tinggi);
    cout << "Luas trapesium adalah: " << luas_trapesium << endl;
cout << "berhitung lagi?(y/n)" << endl;
    cin >> keputusan;
}
    if(pilihan == 6){
        double diagonal1,diagonal2;
    cout << "\nMasukkan panjang diagonal 1 dari belah ketupat: ";
    cin >> diagonal1;
    cout << "Masukkan panjang diagonal 2 dari belah ketupat: ";
    cin >> diagonal2;

    double luas_belah_ketupat = luasBelahKetupat(diagonal1, diagonal2);
    cout << "Luas belah ketupat adalah: " << luas_belah_ketupat << endl;
   cout << "berhitung lagi?(y/n)" << endl;
    cin >> keputusan;
    }
        else{
            cout << "pilihan tidak sesuai" << endl;
        }
}while(keputusan == 'y');
return 0;
}
