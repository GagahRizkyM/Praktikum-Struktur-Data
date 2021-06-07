//Nama	: Gagah Rizky Mulyawan
//Nim	: 20051397045
//Kelas	: D4 2020 MiA

#include<iostream>
#include<conio.h>

/* Penambahan kode program untuk menampilkan perubahan setiap iterasi dari proses pengurutan dengan metode gelembung dan shell. */

using namespace std;
int main()

{
   int val[100];
   int i, n, t;
   cout<<"Pengurutan Menaik Metode Shell Shot"<<endl;
   cout<<"Masukkan Jumlah Data yg ingin di urutkan : ";cin>>n;
   cout<<endl;
    for(i = 0; i < n; i++)
   {
       cout<<"Nilai ke-"<<1+i<<"  : ";cin>>val[i];
   }

    for(int w = n/2; w > 0;w=w/2)
    {
       for(int x = w; x < n; x++)
      {
          for (int y = x-w; y >= 0; y-=w)
         {
             if(val[y+w] < val[y])
            {
                t=val[y+w];
               val[y+w]=val[y];
               val[y]=t;
            }
         }
      }
   }

   cout<<endl;
   cout<<" DATA YG TELAH DIURUTKAN DENGAN MENGGUNAKAN SHELL SORT  \n";
   cout<<endl;
   for(i = 0; i < n; i++)
   {
       cout<<val[i]<<" ";
   }
   getch();
}
