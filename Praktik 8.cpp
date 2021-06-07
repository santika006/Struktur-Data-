//SANTIKA LANA HAYATI
//20051397006
//2020B_D4MI

#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
#define MAX 5
struct pegawai{
 int nip;
 string nama;
 void setIsi(int a, string b){
 nip=a;
 nama=b;
 }
};
pegawai data[MAX];
void urutNip(int x){
pegawai temp;
int i, j;
for(i=1; i<MAX-1; i++)
for(j=MAX-1; j>=i; j--)
if(x==1){
if(data[j-1].nip > data[j].nip){
temp = data[j];
 data[j] = data[j-1];
 data[j-1] = temp;
}
} else if(x==2){
if(data[j-1].nip < data[j].nip){
temp = data[j];
 data[j] = data[j-1];
 data[j-1] = temp;
}
}
}
void urutNama(int x){
 pegawai temp;
int i, j;
for(i=1; i<MAX-1; i++)
for(j=MAX-1; j>=i; j--)
if(x==1){
if(data[j].nama.compare(data[j-1].nama) < 0){
temp = data[j];
 data[j] = data[j-1];
 data[j-1] = temp;
}
} else if(x==2){
if(data[j].nama.compare(data[j-1].nama) > 0){
temp = data[j];
 data[j] = data[j-1];
 data[j-1] = temp;
}
}
}
void tampil(){
 for(int i=0; i<MAX; i++){
 cout<<data[i].nip<<" "<<data[i].nama<<endl;
 }
 }
int main(){
 int pil,x;
 data[0].setIsi(1234,"rifqi");
 data[1].setIsi(4234,"adam");
 data[2].setIsi(3455,"abi");
 data[3].setIsi(5828,"bayu");
 data[4].setIsi(1134,"ramadhan");
 cout<<"Data Pegawai"<<endl;
 tampil();
 cout<<"Mau di urutkan sesuai : "<<endl;
 cout<<"1. Ascending "<<endl;
 cout<<"2. Descending "<<endl;
 cout<<"Pilihan : "; cin>>pil;
 cout<<"1. NIP"<<endl;
 cout<<"2. Nama"<<endl;
 cout<<"Pilihan : "; cin>>x;
 switch(x){
 case 1:
 urutNip(pil);
 tampil();
 break;
 case 2:
 urutNama(pil);
 tampil();
 break;
 }
 return 0;
}
	return 0;
}
