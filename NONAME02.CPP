#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
double getradius();
double square(double);
int main()
{
const double PI= 3.14159;
double rad;
cout<<"Program ini untuk menghitung luas lingkaran.\n";
rad=getradius();
cout<<"Luasnya adalah: "<<PI*square(rad)<<endl;
getch();
return 0;
}
double getradius()
{
double radius;
cout<<"masukkan jari jari lingkaran: "; cin>>radius;
return radius;
}
double square(double number)
{
return number*number;
}