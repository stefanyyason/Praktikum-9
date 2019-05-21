#include <iostream.h>
#include <conio.h>
#include <math.h>

int panjang,lebar; //deklarasi variabel global
void input(); //deklarasi prototipe fungsi
void luas()
{

int ls; //deklarasi variabel lokal
ls=panjang*lebar;
cout<<"Luasnya adalah: "<<ls;
}
void keliling()
{
int kl; //deklarasi variabel lokal
kl=(2*panjang)+(2*lebar);
cout<<"Kelilingnya adalah: "<<kl;
}
void diagonal()
{
float dg; //deklarasi variabel lokal;
dg= sqrt((panjang*panjang)+(lebar*lebar));
cout<<"Diagonalnya adalah: "<<dg;
}
void main()
{
int pilih;
do
{
clrscr();
cout<<"Pilihlah--------->"<<endl;
cout<<"1. Luas Persegi Panjang\n";
cout<<"2. Keliling Persegi Panjang\n";
cout<<"3. Diagonal Persegi Panjang\n";
cout<<"4. SELESAI\n";
cin>>pilih;
if(pilih!=4)
input();
switch(pilih)
{
case 1:luas(); //panggilan fungsi luas
break;
case 2:keliling(); //panggilan fungsi keliling
break;
case 3:diagonal(); //panggilan fungsi diagonal
break;
case 4:cout<<"Terima kasih..!";
}
getch();
}while(pilih!=4);
}
void input()
{
cout<<"Masukkan Nilai Panjang: ";
cin>>panjang;
cout<<"Masukkan Nilai Lebar: ";
cin>>lebar;
return;
}

