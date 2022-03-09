#include <iostream>
using namespace std;
struct mahasiswa{
	int nim;
	string nama;
	float ipk;
	float nilai;
};
int main()
{
	mahasiswa mhs;
	cout<<"masukan nim = ";cin>>mhs.nim;
	cout<<"masukan nama = ";cin>>mhs.nama;
	cout<<"masukan ipk = ";cin>>mhs.ipk;
	cout<<"masukan nilai = ";cin>>mhs.nilai;
	
	cout<<"DATA MAHASISWA "<<endl;
	cout<<"nama = "<<mhs.nama<<endl;
	cout<<"nim = "<<mhs.nim<<endl;
	cout<<"IPK = "<<mhs.ipk<<endl;
	cout<<"nilai = "<<mhs.nilai;
	return 0;
}

