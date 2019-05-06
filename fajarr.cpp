#include<iostream>
#include<windows.h>
#include<stdio.h>

using namespace std;
int a=1,n,d,c,b;

struct puskesmas
{
    string nama;
    string alamat;
    string jenispoli;
    int nik;
    char jk;
    int umur,tggl;

}poli[100];

void daftar_passien(puskesmas)
{
    int pilih=1;
    do {system("cls");
    cout<<"1. Input data pasien\t"<<endl;
    cout<<"2. Tampilkan data pasien\t"<<endl;
    cout<<"3. Update data pasien\t"<<endl;
    cout<<"4. Hapus data pasien\t"<<endl;
    cout<<"0. Selesai"<<endl;
    cout<<" Pilih menu:";cin>>pilih;
    switch(pilih)
    {
    case 1:
        d=0;
        cout<<"\nMasukan Jumlah Data Yang Akan diinput : ";cin>>b;
        for(c=0;c<b;c++){
        d=d+1;
        cout<<"\nData ke-"<<d<<endl;
        cout<<"Masukkan NIK\t\t: ";cin>>poli[a].nik;
        cout<<"Masukkan Nama\t\t: ";cin>>poli[a].nama;
        cout<<"Masukkan Alamat\t\t: ";cin>>poli[a].alamat;
        cout<<"jenis kelamain L/P\t: ";cin>>poli[a].jk;
        cout<<"Masukkan umur\t\t: ";cin>>poli[a].umur;
        cout<<"Masukkan kondisi\t: ";cin>>poli[a].jenispoli;
        a++;}
    break;

    case 2:
        int i,j;
        cout<<"\nTampilkan Data Pasien\n\n";
        cout<<"||\tNO\t||NIK\t||\tNama\t||\tAlamat\t||\tJenis Kelmain\t||\tUmur\t||\tKondisi\t\n";
        j=0;
    for(i=1;i<a;i++)
        {j=j+1;
        cout<<"===============================================================================================\n";
        cout<<"||\t"<<j<<"\t||";
        cout<<poli[i].nik<<"\t||";
        cout<<poli[i].nama<<"\t\t||";
        cout<<poli[i].alamat<<"\t\t||";
        cout<<poli[i].jk<<"\t\t\t||";
        cout<<poli[i].umur<<"\t\t||";
        cout<<poli[i].jenispoli<<"\t\t||";
        cout<<endl;
        }
    break;

    case 3:
       cout<<"silahkan pilih data pasien yang mau di perbarui"<<endl;
        int k,l;
        cout<<"Masukan Data yang akan diubah : ";cin>>k;
        l=k-1;
        cout<<"NIK\t: ";cin>>poli[l].nik;
        cout<<"Nama\t: ";cin>>poli[l].nama;
        cout<<"Alamat\t: ";cin>>poli[l].jk;
        cout<<endl;
    break;

    case 4:
        cout<<"pilih yang mau dihapus"<<endl;
        int x,y;
        cout<<"Hapus data ke-";cin>>x;
        y=x-1;
        a--;
        for(int i=y;i<a;i++)
        {poli[i]=poli[i+1];}
        cout<<"data yang di hapus   :"<<x<<endl;
    break;

    case 0:
        cout<<"selesai"<<endl;
    break;

    default: cout<<"Silahkan Pilih menu kembali"<<endl;
    }
        system("pause");
    }
    while(pilih!=0);
}

int main(){
    int pilih=0;

    do {system("cls");
    cout<<"Daftar Pelayanan Puskesmas"<<endl;
    cout<<"1. Data Pasien"<<endl;

    cout<<"plih menu :";cin>>pilih;

    switch(pilih)
    {
        case 1: {daftar_passien(poli[100]);} break;
        default:cout<<"menu tidak ada"<<endl;

    }
    system("pause");
}
        while(pilih!=0);

    return 0;


}
