#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
   int nip[12];
   string nama[10];
   int jum, gol[10],jkerja[10],jlembur[10];
   int gapok[10],upah_lembur[10],pajakgapok[10],totpajak[10],gajibersih[10],tunjangan[10];
	
   cout<<"Masukan Jumlah Karyawan  : ";
   cin>>jum;
   cout<<endl;
	
   for (int i=1;i<=jum;i++){
        cout<<"KARYAWAN KE-"<<i<<endl;
	cout<<"Masukkan Nip              : ";
	cin>>nip[i];
	cout<<"Masukan Nama              : ";
	cin>>nama[i];
	cout<<"Masukan Golongan          : ";
	cin>>gol[i];
	cout<<"Masukan Jam Kerja         : ";
	cin>>jkerja[i];
	cout<<"Masukkan Upah Lembur      : ";
	cin>>upah_lembur[i];
	
	switch (gol[i]){
		case 1 : 
			gapok[1]=500000;
			upah_lembur[i]=5000;
			break;
		case 2 :
			gapok[2]=300000;
			upah_lembur[i]=3000;
			break;
		case 3 :
			gapok[3]=250000;
			upah_lembur[i]=2000;
			break;
		case 4 :
			gapok[4]=100000;
			upah_lembur[i]=1500;
			break;
		case 5 :
		    gapok[5]=50000;
			upah_lembur[i]=1000;
			break;	
		default :
			gapok[i]=0;
			upah_lembur[i]=0;	
	}
	
	if (jkerja[i]>12){
	    jlembur[i]=jkerja[i]-12;	
	}else{
	     jlembur[i]=0;
	}
	
	upah_lembur[i]=jlembur[i]*5000;
	upah_lembur[i]=jlembur[i]*3000;
	upah_lembur[i]=jlembur[i]*2000;
	upah_lembur[i]=jlembur[i]*1500;
	upah_lembur[i]=jlembur[i]*1000;
	upah_lembur[i]=0.10*gapok[i];
	
	totpajak[i]=pajakgapok[i];
	gajibersih[i]=((gapok[i]+upah_lembur[i])-totpajak[i]);
	cout<<endl;
	}
	
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN"<<endl;
		cout<<endl;
	for (int i=1;i<=jum;i++){
		
		cout<<"     KARYAWAN KE-"<<i<<endl;
		cout<<"Nama                 : "<<nama[i]<<endl;
		cout<<"Gaji Pokok           : "<<gapok[i]<<endl;		
		cout<<"Pajak Gaji Pokok     : "<<pajakgapok[i]<<endl;
		cout<<"Total Pajak          : "<<totpajak[i]<<endl;
		cout<<"Upah Lembur          : "<<upah_lembur[i]<<endl;
		cout<<"Gaji Diterima        : "<<gajibersih[i]<<endl;
		cout<<endl<<endl;	
	}	

getch();
}
