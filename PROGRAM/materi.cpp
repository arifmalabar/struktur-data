#include <iostream>
using namespace std;
struct mahasiswa{ 
	int nim;
	string nama;
	float ipk; //mendelklarasikan atribut atribut dibentuk objek
	float nilai;
};
int main()
{
	mahasiswa mhs; //deklarasi variabel mhs dari struct mahasiswa
	cout<<"masukan nim = ";cin>>mhs.nama;
	cout<<"masukan nama = ";cin>>mhs.nama; //isi nilai dari atribut dalam struct mahasiswa
	cout<<"masukan ipk = ";cin>>mhs.ipk;
	cout<<"masukan nilai = ";cin>>mhs.nilai;
	
	cout<<"DATA MAHASISWA "<<endl;
	cout<<"nama = "<<mhs.nama<<endl;
	cout<<"nim = "<<mhs.nim<<endl; //output nilai dari atribut dalam struct mahasiswa
	cout<<"IPK = "<<mhs.ipk<<endl;
	cout<<"nilai = "<<mhs.nilai;
	return 0;
}

