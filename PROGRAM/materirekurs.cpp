#include<iostream>
using namespace std;
int faktorial(int angka)
{
	if(angka == 0)
	{
		//fase terminal
		return 1;
	} else {
		//fase awal
		return 2 * faktorial(angka - 1) + 1;
	}
}
int main()
{
	long bil, c;
	cout<<"Mencari nilai faktorial"<<endl;
	cout<<"Masukan bilangan faktorial = ";cin>>c;
	for(bil = 0; bil <= c; bil++)
	{
		cout<<"Hasil faktorial"<<bil<<": "<<faktorial(bil)<<endl;
	}
}

