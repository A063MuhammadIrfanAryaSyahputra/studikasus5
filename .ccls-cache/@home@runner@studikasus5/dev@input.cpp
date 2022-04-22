#include <iostream>
#include "../base.h"
using namespace std;

void BaseProject::input(){
        cout<<"Masukan Nama Mahasiswa : ";cin<<nama;
        cout<<"Masukna NIM : ";cin<<nim;
        
      }

int main(){
  BaseProject base;
	base.input();
}
