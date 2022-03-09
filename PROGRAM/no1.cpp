#include <iostream>
using namespace std;

int main()
{
	int x, y, *p, *q, *r;
	p = &x; //var pointer isi pengalamatan variabel x
	q = &y; //var pinter isi pengalamatan variabel y
	r = &x; //var pinter isi pengalamatan variabel x
	
	cout<<"nilai alamat x = "<<p<<endl;
	cout<<"nilai alamat y = "<<q<<endl; //tabel 1
	cout<<"nilai alamat x = "<<r<<endl;
	cout<<"nilai alamat p = "<<&p<<endl;
	cout<<"nilai alamat q = "<<&q<<endl;
	cout<<"nilai alamat r = "<<&r<<endl;
	
	*p = 10; //10
	*q = 5; //5
	cout<<"hasil isi variabel x = "<<x<<endl; //tabel 2
	cout<<"hasil isi variabel y = "<<y<<endl;
	*r = *p * *q; //10 * 5 = 150
	cout<<"hasil perkalian pointer nilai q * r = "<<*r<<endl; //150
	cout<<"hasil perkalian x = "<<x<<endl; //tabel 3
	cout<<"hasil nilai y = "<<y<<endl;
	
	return 0;
}
