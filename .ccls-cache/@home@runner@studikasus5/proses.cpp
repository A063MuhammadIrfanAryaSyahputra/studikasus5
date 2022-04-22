#include "../base.h"

void BaseProject::proses(int jumlahmatkul){
	 int i=0;
  
  string mk[50];
  int sks[10], jumlahmatkul=3;
  float harga=150000, diskon, total2, total1;
  
    while (i<= jumlahmatkul)
    {
      cout<<" Masukan Nama Mata kuliah         : "; cin>>mk[i];
      cout<<" Masukan Jumlah SKS               : "; cin>>sks[i];
      cout<<endl;
      total1 = sks[i] * harga;
      diskon = tota1 * 0.25;
      total2 = total1 - diskon;
      cout<<total2;
      
      
      
      }

int main(){
	BaseProject base;
	base.proses();
}