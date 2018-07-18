// Nama : Setiawan Eko Nugroho
// kelas : S1-IF-10
// NIM : 17.11.1555
#include <iostream> // sebagai header file input output
#include <conio.h> // untuk menampilkan perintah getch
					//berfungsi untuk menahan tampilan
using namespace std;
class Buku {    //buku sebagai sebuah class
	public:       //atribut-atribut yang ada 
	int kobar;
	int buku;
	int bns;
	string beli,lagi, yt;
	string totbay,jumbel,totbel,potongan,harga;
};

int main() {
int Total; // total sebagai object	 
char kobar,buku[20],bns,beli,lagi, yt;
float totbay,jumbel,totbel,potongan,harga;
kembali:

cout<<""<<endl;
cout<<" Masukkan Kode Buku   : ";cin>>kobar; // sebagai input data 
cout<<" Jumlah Pembelian Buku : ";cin>>jumbel;

cout<<"\n ";
// menampilkan hasil (output)
cout<<"\t\t=================================="<<endl;
cout<<"\t\t\t  TOKO BUKU GANESA \n";  // output data buku
cout<<"\t\t\t  Jl. GEMPOL RAYA No.04 \n";
cout<<"\t\t=================================="<<endl;
cout<<""<<endl;
cout<<" Nama Buku yang di Beli     :"<<buku;
switch(kobar)
 {
  case ('1') :
      {
      cout<<"Ada Apa Dengan Kita"<<buku; // sebagai tampilan judul buku yang di beli
      harga= 50000*jumbel ; // menghitung jumlah harga buku yang di beli
      }
      break;
  case ('2') :
      {
      cout<<"Jalan Pulang"<<buku;
      harga= 35000*jumbel;
      }
      break;
 }
cout<<endl;
cout<<" Harga Buku yang Anda Beli    : Rp."<<harga<<endl; // menampilkan harga buku
    if (jumbel >5)
  {
   potongan = 0.3*harga;
  }
  else
  {
   potongan= 0;
  }
cout<<" Jumlah Buku yang Anda Beli   : "<<jumbel<<endl;
cout<<" Total Harga                  : Rp."<<harga<<endl;

totbay= harga-potongan;
cout<<" ---------------------------------------------"<<endl;
cout<<" Total Bayar                  : Rp."<<totbay<<endl;

cout<<" "<<bns;
     if (jumbel >5)
  {
  cout<<" "<<bns;
  }
   else
  {
   cout<<" "<<bns;
  }
  cout<<endl;
cout<<" \n ";
cout<<"---------------------------------------------"<<endl;
cout<<"\t\t\t **** TERIMA KASIH ****";
cout<<endl;

getch(); // mengakhiri program
}            
