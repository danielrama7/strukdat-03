/*
Nama Program        : exercise-03
Nama                : Daniel Rama H.
NPM                 : 140810180045
Tanggal buat        : 12 Maret 2019
Deskripsi program   : pointer of record
*/

#include<iostream>
#include<math.h>
using namespace std;

typedef struct {
 float panjang;
 float lebar;
} segiempat;

void input(segiempat *s)
{
    cout<<"masukkan panjang segi empat : ";cin>>s->panjang;
    cout<<"masukkan lebar segi empat : ";cin>>s->lebar;
}
float keliling(segiempat s)
{
    return (2*s.panjang)+(2*s.lebar);
}
float luas(segiempat s)
{
    return s.panjang*s.lebar;
}
float diagonal(segiempat s)
{
    return sqrt((s.panjang*s.panjang)+(s.lebar*s.lebar));
}
void print(segiempat s)
{
    cout<<"keliling segiempat : "<<keliling(s)<<endl;
    cout<<"luas segiempat     : "<<luas(s)<<endl;
    cout<<"diagonal           : "<<diagonal(s)<<endl;
}

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}

