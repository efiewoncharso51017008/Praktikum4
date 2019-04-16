#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
main () {
int a,b,mod;
float bagi;
cout<<"\n\tContoh penggunaan / dan %\n\n" ;
cout<<"\tMasukan angka pertama (a) = ";cin>>a;
cout<<"\tMasukan angka kedua (b) = ";cin>>b;
bagi=float(a)/b;
mod=a%b;
cout<<"\n\tHasil pembagian = "<<setprecision(3)<<bagi;
cout<<"\n\tsisa hasil bagi = "<<mod;
getch();}