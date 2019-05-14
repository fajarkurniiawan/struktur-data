#include<iostream>
#include<windows.h>
#include<stdio.h>

using namespace std;
int a=1,n,d,c,b;
int tggl;

struct poli{
    string pasien;
    string dokter;
}poly[100];

struct rumahsakit
{
    char jk;
    string alamat,nama,jenispoli;
    int umur,tggl,nik;

}pustu[100];


void read(rumahsakit)
{
        int i,j;
        cout<<"\nTampilkan Data Pasien\n\n";
        cout<<"||\tNO\t||NIK\t||\tNama\t||\tAlamat\t||\tJenis Kelmain\t||\tUmur\t||\tKondisi\t\n";
        j=0;
    for(i=1;i<a;i++)
        {j=j+1;
        cout<<"===============================================================================\n";
        cout<<"||\t"<<j<<"\t||";
        cout<<pustu[i].nik<<"\t||";
        cout<<pustu[i].nama<<"\t\t||";
        cout<<pustu[i].alamat<<"\t\t||";
        cout<<pustu[i].jk<<"\t\t\t||";
        cout<<pustu[i].umur<<"\t\t||";
        cout<<pustu[i].jenispoli<<"\t\t||";
        cout<<endl;
        }
}

void create(rumahsakit)
{
        d=0;
        cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
        for(c=0;c<b;c++){
        d=d+1;
        cout<<"\nData ke-"<<d<<endl;
        cout<<"Masukkan NIK\t: ";cin>>pustu[a].nik;
        cout<<"Masukkan Nama\t: ";cin>>pustu[a].nama;
        cout<<"Masukkan Alamat\t: ";cin>>pustu[a].alamat;
        cout<<"Masukkan jenis kelamain L/P: ";cin>>pustu[a].jk;
        cout<<"Masukkan umur\t: ";cin>>pustu[a].umur;
        cout<<"Masukkan kondisi\t: ";cin>>pustu[a].jenispoli;
        a++;}
}

void update(rumahsakit)
{


       cout<<"silahkan pilih data pasien yang mau di perbarui"<<endl;
        int k,l;
        cout<<"Masukan Data yang akan diperbarui : ";cin>>k;
        l=k-1;
        cout<<"NIK\t: ";cin>>pustu[l].nik;
        cout<<"Nama\t: ";cin>>pustu[l].nama;
        cout<<"Alamt\t: ";cin>>pustu[l].alamat;
        cout<<"Jenis Kelamin\t: ";cin>>pustu[l].jk;
        cout<<"Umur\t: ";cin>>pustu[l].umur;
        cout<<"Kondisi\t: ";cin>>pustu[l].jenispoli;
        void read(rumahsakit);
}

void hapus(rumahsakit)
{
        cout<<"pilih yang mau di hapus"<<endl;
        int x,y;
        cout<<"Hapus data ke-";cin>>x;
        y=x-1;
        a--;
        for(int i=y;i<a;i++)
        {pustu[i]=pustu[i+1];}
        cout<<"data yang di hapus   :"<<x<<endl;
}
void pasien(rumahsakit)
{
int pilih=0;

    do {system("cls");
    cout<<"Data Pasien"<<endl;
    cout<<"1. Input Data Pasien"<<endl;
    cout<<"2. Melihat Data"<<endl;
    cout<<"3. Update data"<<endl;
    cout<<"4. Hapus data"<<endl;
    cout<<"0. Selesai"<<endl;

cout<<"plih menu :";cin>>pilih;

    switch(pilih)
    {
        case 1: {create(pustu[100]);} break;
        case 2: {read(pustu[100]);} break;
        case 3: {update(pustu[100]);} break;
        case 4: {hapus(pustu[100]);} break;
        case 0: cout<<"selesai"<<endl; break;
        default:cout<<"menu tidak ada"<<endl;

    }
    system("pause");
}
        while(pilih!=0);

}
void create_pol(poli)
{
        d=0;
        cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
        for(c=0;c<b;c++){
        d=d+1;
        cout<<"\nData ke-"<<d<<endl;
        cout<<"Masukkan Nama Poli\t: ";cin>>poly[a].pasien;
        cout<<"Masukkan Nama dokter poli\t: ";cin>>poly[a].dokter;
        cout<<endl;
        a++;}
}

void read_pol(poli)
{
        int i,j;
        cout<<"\nTampilkan Data Poli\n\n";
        cout<<"||\tNama\t||\tJenis\t||\tNama Dokter\t\n||";
        j=0;
    for(i=1;i<a;i++)
        {j=j+1;
        cout<<"===============================================================================\n";
        cout<<"||\t"<<j<<"\t||";
        cout<<poly[i].pasien<<"\t\t||";
        cout<<poly[i].dokter<<"\t\t||";
        cout<<endl;
        }
}

void update_pol(poli)
{
       cout<<"silahkan pilih data pasien yang mau di perbarui"<<endl;
        int k,l;
        cout<<"Masukan Data yang akan diperbarui : ";cin>>k;
        l=k-1;
        cout<<"Nama\t: ";cin>>poly[l].pasien;
        cout<<"Dokter\t: ";cin>>poly[l].dokter;
        void read_po(poli);
}

void hapus_pol(poli)
{
        cout<<"pilih yang mau di hapus"<<endl;
        int x,y;
        cout<<"Hapus data ke-";cin>>x;
        y=x-1;
        a--;
        for(int i=y;i<a;i++)
        {poly[i]=poly[i+1];}
        cout<<"data yang di hapus   :"<<x<<endl;
}
void polii(poli)
{
    int pilih=0;

    do {system("cls");
    cout<<"Data Pasien"<<endl;
    cout<<"1. Input Data Poli"<<endl;
    cout<<"2. Lihat Data Poli"<<endl;
    cout<<"3. Update Data Poli"<<endl;
    cout<<"4. hapus Data Poli"<<endl;
    cout<<"0. selesai"<<endl;
    cout<<"plih menu :";cin>>pilih;

    switch(pilih)
    {
        case 1: {create_pol(poly[100]);} break;
        case 2: {read_pol(poly[100]);} break;
        case 3: {update_pol(poly[100]);} break;
        case 4: {hapus_pol(poly[100]);} break;
        case 0: cout<<"selesai"<<endl; break;
        default:cout<<"menu tidak ada"<<endl;

    }
    system("pause");
}
        while(pilih!=0);
}

 void transaksi(){
    int pilih,X,Z;

    do {system("cls");
        cout<<"Menu transaksi"<<endl;
        cout<<"1. transaksi"<<endl;
        cout<<"2. transaksi"<<endl;
        cout<<"3. transaksi"<<endl;
        cout<<"0. Selesai"<<endl;
        cout<<"Silahkan pilih menu transaksi";cin>>pilih;
        cout<<endl;
    switch(pilih){
    case 1:
        cout<<"Masukkan tanggal transaksi (dd-mm-yy)    :";cin>>tggl;
    break;
    case 2:
        {
            read(pustu[100]);
        }
        cout<<"pilih data pasien :";cin>>X;
        cout<<endl;
    break;
    case 3:
        {
            read_pol(poly[100]);
        }
        cout<<"pilih data poli  :";cin>>Z;
        cout<<endl;
    break;
    case 0:
        cout<<"terimakasih"<<endl;
    break;
    default:cout<<"Masukan menu"<<endl;}
        system("pause");}
    while(pilih!=0);

}

 int main(){
    int pilih=0;

    do {system("cls");
    cout<<"Data Pasien"<<endl;
    cout<<"1. Input Data Pasien"<<endl;
    cout<<"2. Input Data Poli"<<endl;
    cout<<"3. Transaksi"<<endl;
    cout<<"0. Selesai"<<endl;
    cout<<"plih menu :";cin>>pilih;

    switch(pilih)
    {
        case 1: {pasien(pustu[100]);} break;
        case 2: {polii(poly[100]);} break;
        case 3: {transaksi();} break;
        case 4: cout<<"Selesai"<<endl;break;
        default:cout<<"menu tidak ada"<<endl;

    }
    system("pause");
}
        while(pilih!=0);

    return 0;


}
