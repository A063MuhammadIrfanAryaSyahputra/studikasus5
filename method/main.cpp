#include "base.h"

int main(){
  int jumlahmatkul;
	BaseProject base;
	base.input();
  cout<<"Masukkan Jumlah Mata Kuliah : "; cin>>jumlahmatkul;
  base.proses(jumlahmatkul);
  base.output(jumlahmatkul);
}