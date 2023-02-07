#include <iostream>
using namespace std;

int main(){

    int angka;
    cout <<" LUCKY "<<endl;
    cout <<"Masukan Angka : ";
    cin >>angka;
    if(angka > 0){
        cout <<"Anda Memasukkan Bilangan Positif";
    }else if(angka == 0){
        cout <<"Anda Memasukkan Angka 0";
    } else{
        cout
        <<"Anda Memasukkan Bilangan Negatif";
    }
    return 0;
}
