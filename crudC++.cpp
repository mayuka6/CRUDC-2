#include<iostream>
#include<conio.h>
#define A 1000
using namespace std;

struct att {
int no;
string nama;
string jenis;
int isi;
int beli;
int grosir;
int eceran;
int stok;
};

main(){
char out;
int pil, u, b, elm;
att barang[A];

for(int y=0;y<A;y++){barang[y].no=0;}
	
	v:cout<<"----------- MENU -----------"<<endl;
		cout<<"1. Memasukkan data barang"<<endl;
		cout<<"2. Melihat data barang"<<endl;
		cout<<"3. Mengubah data barang"<<endl;
		cout<<"4. Menghapus data barang"<<endl;
		cout<<"5. Hitung Jumlah Asset"<<endl;
		cout<<endl;
		cout<<"Masukan Pilihan : ";
		cin>>pil;
		cout<<endl;
		
switch (pil){
case 1:
b=0;
while(barang[b].no>0){b++;}
if(b>=A){cout<<"Tidak dapat melakukan inputan, stok gudang penuh!"<<endl;}
else{
	barang[b].no=b+1;
cout<<"Inputkan nama barang          : ";
cin>>barang[b].nama;
cout<<"Inputkan jenis kemasan barang : ";
cin>>barang[b].jenis;
cout<<"Inputkan isi dalam kemasan    : ";
cin>>barang[b].isi;
cout<<"Inputkan harga beli           : ";
cin>>barang[b].beli;
cout<<"Inputkan stok                 : ";
cin>>barang[b].stok;
barang[b].grosir=barang[b].beli+(0.05*barang[b].beli);
barang[b].eceran=(barang[b].beli+(0.1*barang[b].beli))/barang[b].isi;
cout<<endl; cout<<"Masukkan sukses :)"<<endl;
}
break;
case 2:
	cout<<"----- STOK -----"<<endl;
	cout<<endl;
	b=0;
for(int y=0;y<A;y++){
	if(barang[y].no>0){b=1;
	cout<<"No barang            = "<<barang[y].no<<endl;
	cout<<"Nama barang          = "<<barang[y].nama<<endl;
	cout<<"Jenis kemasan barang = "<<barang[y].jenis<<endl;
	cout<<"Isi dalam kemasan    = "<<barang[y].isi<<endl;
	cout<<"Harga beli           = Rp. "<<barang[y].beli<<endl;
	cout<<"Harga jual grosir    = Rp. "<<barang[y].grosir<<endl;
	cout<<"Harga jual eceran    = Rp. "<<barang[y].eceran<<endl;
	cout<<"Stok                 = "<<barang[y].stok<<" "<<barang[y].jenis<<endl;
	cout<<"----------------------------------------"<<endl;
	}}
	if(b==0){cout<<"Belum ada barang tersimpan :("<<endl;}
break;
case 3:
	cout<<"----- STOK -----"<<endl;
	cout<<endl;
b=0;
for(int y=0;y<A;y++){
	if(barang[y].no>0){b=1;
	cout<<"No barang            = "<<barang[y].no<<endl;
	cout<<"Nama barang          = "<<barang[y].nama<<endl;
	cout<<"Jenis kemasan barang = "<<barang[y].jenis<<endl;
	cout<<"Isi dalam kemasan    = "<<barang[y].isi<<endl;
	cout<<"Harga beli           = Rp. "<<barang[y].beli<<endl;
	cout<<"Harga jual grosir    = Rp. "<<barang[y].grosir<<endl;
	cout<<"Harga jual eceran    = Rp. "<<barang[y].eceran<<endl;
	cout<<"Stok                 = "<<barang[y].stok<<" "<<barang[y].jenis<<endl;
	cout<<"----------------------------------------"<<endl;}}
	if(b==1){cout<<endl; cout<<"Masukkan no barang yang ingin diubah : "; cin>>elm;
	cout<<endl;
	if(elm==barang[elm-1].no){
	cout<<"Inputkan nama barang          : ";
cin>>barang[elm-1].nama;
cout<<"Inputkan jenis kemasan barang : ";
cin>>barang[elm-1].jenis;
cout<<"Inputkan isi dalam kemasan    : ";
cin>>barang[elm-1].isi;
cout<<"Inputkan harga beli           : ";
cin>>barang[elm-1].beli;
cout<<"Inputkan stok                 : ";
cin>>barang[elm-1].stok;
barang[elm-1].grosir=barang[elm-1].beli+(0.05*barang[elm-1].beli);
barang[elm-1].eceran=(barang[elm-1].beli+(0.1*barang[elm-1].beli))/barang[elm-1].isi;
cout<<endl; cout<<"Masukkan sukses :)"<<endl;}
	else{cout<<"Nomor urut barang yang Anda masukkan tidak valid :("<<endl;}}
	else{cout<<"Belum ada barang tersimpan :("<<endl;}
break;
case 4:
cout<<"----- STOK -----"<<endl;
cout<<endl;
b=0;
for(int y=0;y<A;y++){
	if(barang[y].no>0){b=1;
	cout<<"No barang            = "<<barang[y].no<<endl;
	cout<<"Nama barang          = "<<barang[y].nama<<endl;
	cout<<"Jenis kemasan barang = "<<barang[y].jenis<<endl;
	cout<<"Isi dalam kemasan    = "<<barang[y].isi<<endl;
	cout<<"Harga beli           = Rp. "<<barang[y].beli<<endl;
	cout<<"Harga jual grosir    = Rp. "<<barang[y].grosir<<endl;
	cout<<"Harga jual eceran    = Rp. "<<barang[y].eceran<<endl;
	cout<<"Stok                 = "<<barang[y].stok<<" "<<barang[y].jenis<<endl;
	cout<<"----------------------------------------"<<endl;}}
	if(b==1){cout<<endl; cout<<"Masukkan no barang yang ingin dihapus : "; cin>>elm;
	cout<<endl;
	if(elm==barang[elm-1].no){
barang[elm-1].no=0;
barang[elm-1].nama="";
barang[elm-1].jenis="";
barang[elm-1].isi=0;
barang[elm-1].beli=0;
barang[elm-1].stok=0;
barang[elm-1].grosir=0;
barang[elm-1].eceran=0;
u=0;
for(int y=0; y<A; y++){if(barang[y].no>0){
barang[u].no=u+1;
barang[u].nama=barang[y].nama;
barang[u].jenis=barang[y].jenis;
barang[u].isi=barang[y].isi;
barang[u].beli=barang[y].beli;
barang[u].stok=barang[y].stok;
barang[u].grosir=barang[y].grosir;
barang[u].eceran=barang[y].eceran;
u++;
}}
while(u<A){
barang[u].no=0;
barang[u].nama="";
barang[u].jenis="";
barang[u].isi=0;
barang[u].beli=0;
barang[u].stok=0;
barang[u].grosir=0;
barang[u].eceran=0;
u++;}
cout<<"Data barang berhasil dihapus :)"<<endl;}
	else{cout<<"Nomor urut barang yang Anda masukkan tidak valid :("<<endl;}}
	else{cout<<"Belum ada barang tersimpan :("<<endl;}
break;
case 5:
	b=0;
	u=0;
	for(int y=0;y<A;y++){
	if(barang[y].no>0){u=u+(barang[y].grosir*barang[y].stok); b=1;}}
	if(b==1){cout<<"Total nilai seluruh asset di gudang = Rp. "<<u<<endl;}
	else{cout<<"Data barang masih kosong mlompong, silahkan isi terlebih dahulu :("<<endl;
	}
break;
default:
cout<<"Maaf, Masukan Salah :("<<endl;
}cout<<endl;
cout<<"Kembali ke Menu(Y/T) : ";
cin>>out;
cout<<endl;
	if(out=='y'||out=='Y')goto v;
	return 0;
}
