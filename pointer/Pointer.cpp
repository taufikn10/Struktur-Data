#include<iostream>
#include<stdio.h>
using namespace std;

int b(const char*s){

int a = 0;
for (;*s!='\0';s++)
++a;
return a;
}
main (void){
cout<<endl;
cout<<"  Nama        : Taufik Nurrahman "<<endl;
cout<<"  Kelas       : D4 Manajemen Informatika "<<endl;
cout<<"  Praktikum   : Pointer"<<endl;
cout<<"  PROGAM MENGHITUNG BANYAKNYA KARAKTER " <<endl;
cout<<endl;
char String [80];
cout<<"  Tulisan Kata      : ";
cin.getline(String,100);cout<<endl;
cout<<"  Jumlah Karakter : "<<b(String)<<" Huruf "<<endl;
}
