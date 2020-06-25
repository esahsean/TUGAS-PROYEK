#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;

main()
{
int kode, hasil1, hasil2, hasil3, x, p=1000;
string nama;
char status;

cout<<"\n PERPUSTAKAAN \n";
cout<<" ==============Daftar Buku==============\n";
cout<<" JENIS BUKU\n";
cout<<" 01 Pemrograman\n";
cout<<" 02 Sastra\n";
cout<<" 03 Novel\n";

cout<<"\n Nama Penyewa Buku : "; cin>>nama;
cout<<" Banyak Pinjam Buku : "; cin>>x;
a:
cout<<" Masukkan Kode Buku : "; cin>>kode;

if(kode==01)
{
cout<<"\n -----------struk Peminjaman-----------\n";
cout<<"\n Lama peminjaman buku selama seminggu\n";
cout<<" Tarif Denda Rp. 1000\n";
cout<<" Jenis Buku Pemrograman\n";
cout<<" Penyewa Dengan Nama " <<nama;
hasil1=x*p;
cout<<" Jumlah Bayar Denda selama seminggu Sebesar Rp. " <<hasil1<<endl;

{
cout<<"\n\n Apakah Anda Ingin Mencoba Lagi ? (y=yes / n=no) : "; cin>>status;
if(status =='y' || status =='Y')
goto a;
else
goto end;
}

}

else if(kode==02)
{
cout<<"\n -----------struk Peminjaman-----------\n";
cout<<" Lama peminjaman buku selama seminggu\n";
cout<<" Tarif Denda Rp. 1000\n";
cout<<" Jenis Buku Sastra\n";
cout<<" Penyewa Dengan Nama " <<nama;
hasil2=x*p;
cout<<" Jumlah Bayar denda selama seminggu Sebesar Rp. " <<hasil2<<endl;

{
cout<<"\n\n Apakah Anda Ingin Mencoba Lagi ? (y=yes / n=no) : "; cin>>status;
if(status =='y' || status =='Y')
goto a;
else
goto end;
}

}
else if(kode==03)
{
cout<<"\n -----------struk Peminjaman-----------\n";
cout<<" Lama peminjaman buku selama seminggu\n";
cout<<" Tarif Sewa Rp. 1000\n";
cout<<" Jenis Buku Novel\n";
cout<<" Penyewa Dengan Nama " <<nama;
hasil3=x*p;
cout<<" Jumlah Bayar denda selama seminggu Sebesar Rp. " <<hasil3<<endl;

{
cout<<"\n\n Apakah Anda Ingin Mencoba Lagi ? (y=yes / n=no) : "; cin>>status;
if(status =='y' || status =='Y')
goto a;
else
goto end;
}

}

else
{
cout<<"\n WARNING!!! \n Kode Buku Yang Anda Masukkan Salah! \n Silahkan Ulangi Kembali!\n";
goto a;
}

end:
cout<<"\n\n ==============================";
cout<<"\n Terimakasih Atas Kunjungannya.";
cout<<"\n ==============================";
getch();
}

