
include"../base.h"
using namespace std;
  
void BaseProject::output(){
    cout<<"Nama Mahasiswa : \t"<<nama<<endl;
    cout<<"Jumlah SKS : \t"<<sks[i]<<endl;
    cout<<"Keringanan Biaya SKS : \t"<<diskon<<endl;
    cout<<"Dikarenakan pandemi diberi keringanan 25%, jadi total pembayaran anda : \t"<<total2<<endl;
  }
}
int main(){
  BaseProject base;
	base.output();
}
  