//Nama	: Gagah Rizky Mulyawan
//Nim	: 20051397045
//Kelas	: D4 2020 MiA

#include<iostream>
using namespace std;
int i;
int angka(int n )
{
    cout<<"MASUKKAN ANGKA :";
    cin>>n;
     for (i=0; i<n; i++)
    {
        cout<<"Rekursi Dari 0 Ke N : "<<i;
        cout<<endl;
    }
    return n;
}

int main ()
{
    int n;
    int i;
    cout<<angka(i);
}

