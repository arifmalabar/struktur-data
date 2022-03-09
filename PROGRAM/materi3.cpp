#include<iostream>
using namespace std;
struct mahasiswa {
	int nim;
	string nama;
	float ipk;
}jono;

int main()
{
	mahasiswa *mhs;
	mhs = &jono;
	cout<<"masukan nim = ";cin>>mhs->nim;
	cout<<"masukan nama = ";cin>>mhs->nama;
	cout<<"masukan ipk = ";cin>>mhs->ipk;
	
	cout<<"DATA MAHASISWA"<<endl;
	cout<<"nim = "<<mhs->nim<<endl;
	cout<<"nama = "<<mhs->nama<<endl;
	cout<<"ipk = "<<mhs->ipk<<endl;
	cout<<"alamat penyimpanan "<<mhs;
}
