#include <iostream.h>
#include <conio.h>
main () {
int a,b,mod;
float hasil;
cout<<"Contoh penggunaan / dan %\n\n";
cout<<"masukan angka pertama (a) = ";cin>>a;
cout<<"masukan angka kedua (b) = ";cin>>b;
hasil=float(a)/b;
mod=a%b;
cout<<"\nhasil pembagian = "<<hasil;
cout<<"\nsisa hasil bagi = "<<mod;
getch();}