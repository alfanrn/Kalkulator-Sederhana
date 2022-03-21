#include <iostream>
using namespace std;
int main(){
  int pilihan;
  float hasil, bil1, bil2;
  char ulang;
  do{
    cout<<"|     KALKULATOR     |"<<endl;
    cout<<"======================"<<endl;
    cout<<"| 1. Penjumlahan     |"<<endl;
    cout<<"| 2. Pengurangan     |"<<endl;
    cout<<"| 3. Perkalian       |"<<endl;
    cout<<"| 4. Pembagian       |"<<endl;
    cout<<"======================"<<endl;
    cout<<endl;
    cout<<"Pilihan anda: ";
    cin>>pilihan;
    switch(pilihan){
    case 1:
        cout<<"Masukan Bilangan Pertama : "<<endl;
        cin>>bil1;
        cout<<"Masukan Bilangan Kedua   : "<<endl;
        cin>>bil2;
        hasil=bil1+bil2;
        cout<<"Hasil = "<<hasil<<endl;
        break;
    case 2:
        cout<<"Masukan Bilangan Pertama : "<<endl;
        cin>>bil1;
        cout<<"Masukan Bilangan Kedua   : "<<endl;
        cin>>bil2;
        hasil=bil1-bil2;
        cout<<"Hasil = "<<hasil<<endl;
        break;
    case 3:
        cout<<"Masukan Bilangan Pertama : "<<endl;
        cin>>bil1;
        cout<<"Masukan Bilangan Kedua   : "<<endl;
        cin>>bil2;
        hasil=bil1*bil2;
        cout<<"Hasil = "<<hasil<<endl;
        break;
  case 4:
        cout<<"Masukan Bilangan Pertama : "<<endl;
        cin>>bil1;
        cout<<"Masukan Bilangan Kedua   : "<<endl;
        cin>>bil2;
        hasil=bil1/bil2;
        cout<<"Hasil = "<<hasil<<endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
    }
    cout<<"\nLANJUTKAN OPERASI? (y/t)? ";
    cin>>ulang;
    system("CLS");
}
  while(ulang=='y');
  cout<<"Terimakasih...";
  cout<<endl;
  return 0;
}
