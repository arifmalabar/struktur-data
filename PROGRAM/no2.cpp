#include <iostream>
using namespace std;
int main()
{
	int nilai[3];
	int *alnilai;
	alnilai = nilai;
	for(int i = 0; i<3; i++)
	{
		cout<<"Masukan nilai ke "<<i+1<<endl;
		cout<<"Masuknan nilai = ";cin>>nilai[i];
	}
	cout<<endl;
	cout<<"Akses Nilai Melalui Pointer"<<endl;
	for(int a = 0; a<3; a++)
	{
		cout<<"Nilai ke "<<a+1<<endl;
		cout<<"Nilai = "<<nilai[a]<<endl;
		cout<<"Pd alamat = "<<&alnilai[a]<<endl;
	}
	return 0;
}
