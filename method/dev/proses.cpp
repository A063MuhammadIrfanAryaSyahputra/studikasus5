#include <iostream>
using namespace std;

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
	  cout<<"Diskon : "<<diskon;
	  cout<<endl;
    cout<<"Total Harga : "<<total2;

}

int main(){
	BaseProject base;
	base.proses();
}