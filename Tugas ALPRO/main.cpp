/* PROGRAM PENJUMLAHAN PENGURANGAN PERKALIAN
NAMA        : PATERNUS KRISTIAN PASKA
NIM         : A11.2022.14309
KELOMPOK    : A11.4207 */

#include <iostream>

using namespace std;

int penj(int a, int b){
    return a+b;
}

int peng(int a, int b){
    return a-b;
}

int perk(int a, int b){
    return a*b;
}

int tot(int arr[], int x){
    int hasil=0;
    for(int i=0; i<x; i++){
        hasil += arr[i];
    }
    return hasil;
}

float rata(int arr[], int x){
    float hasil=0;
    for(int i=0; i<x; i++){
        hasil += arr[i];
    }
    return hasil /=x;
}


int main()
{
    //KAMUS
    int a, b, x;

    //ALGORITMA
    cout << "Masukan 2 Bilangan : ";
    cin >> a;
    cin >> b;
    cout << "Penjumlahan : " << a << "+" << b << "=" << penj(a,b) << endl;
    cout << "Pengurangan : " << a << "+" << b << "=" << peng(a,b) << endl;
    cout << "Perkalian   : " << a << "+" << b << "=" << perk(a,b) << endl;

    cout << "===========================================================" << endl;
    cout << "Masukan Array : " ;
    cin >> x;
    int arr[x];
    for(int i=0; i<x; i++){
        cout << "Masukan array ke - [" << i << "] = ";
        cin >> arr[i];
    }
    cout << "Total array yang diinput : " << tot(arr,x) << endl;
    cout << "Rata - Rata : " << rata(arr,x) << endl;
    return 0;
}
