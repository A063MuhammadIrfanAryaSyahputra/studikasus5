#include <iostream>
using namespace std;

class BaseProject {
	public :
		void input();
    void proses(int jumlahmatkul);
    void output(int jumlahmatkul);

	private :
  int i=1;
  string mk[50], nama;
  int sks[10],totalmatkul, jumlahmatkul, 
  totalsks=0,harga=150000,diskon,total1, nim;
  long int total2;
};

void BaseProject::input(){
        cout<<"Masukan Nama Mahasiswa : ";cin>>nama;
        cout<<"Masukna NIM : ";cin>>nim;
  
      }


void BaseProject::proses(int jumlahmatkul){  
  long int total2;
  while (i <= jumlahmatkul){
      cout<<" 1. Masukan Nama Mata kuliah         : "; cin>>mk[i];
      cout<<" 2. Masukan Jumlah SKS               : "; cin>>sks[i];
      cout<<endl;
      totalsks += sks[i];
      total1 = totalsks*harga;
      diskon = total1 * 0.25;
      total2 = total1 - diskon;
      i++;
      }
}

void BaseProject::output(int jumlahmatkul){
    cout<<"====================================="<<endl;
    cout<<"==========BIAYA SKS MAHASISWA========"<<endl;
    cout<<"====================================="<<endl;
    cout<<"Nama Mahasiswa        : "<<nama<<endl;
  cout<<"====================================="<<endl;
  cout<<"no. MK || SKS "<<endl;
  for(int i=1; i<=jumlahmatkul; i++){
      cout<<i<<". "<<mk[i]<<" | "<<sks[i]<<endl;
    }
  cout<<"====================================="<<endl;
    cout<<"Jumlah SKS            : "<<totalsks<<endl;
    cout<<"Keringanan Biaya SKS  : Rp."<<diskon<<endl;
    cout<<"Total Pembayaran Anda : Rp."<<total2<<endl;
    cout<<"======================================"<<endl;
}