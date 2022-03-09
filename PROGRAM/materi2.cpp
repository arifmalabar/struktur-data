#include <iostream>
using namespace std;
struct datasiswa{
	int nim;
	string nama;
};
int main()
{
	datasiswa sis[3];
	int jml = 0;
	
	for(int i = 0; i < 3; i++)
	{
		cout<<"Input ke - "<<i+1<<endl;
		cout<<"NIS = ";cin>>sis[i].nim;
		cout<<"Nama = ";cin>>sis[i].nama;
		jml+=1;
	}
	cout<<endl;
	cout<<"Data siswa"<<endl;
	for(int i = 0; i < 3; i++)
	{
		cout<<"Input ke - "<<i+1<<endl;
		cout<<"NIS = "<<sis[i].nim<<endl;
		cout<<"Nama = "<<sis[i].nama<<endl;
	}
	cout<<"jumlah data "<<jml<<endl;
	return 0;
}
