#include <iostream>

using namespace std;

int main ()
{
	float a,b,hasil;
	char aritmatika;
	//Pemrograman Calculator
	cout <<"Selamat Datang di program calculator\n\n";
	
	//masukkan input dari user
	cout <<"Masukkan nilai pertama: ";
	cin >> a;
	cout <<"Pilih operator +,-,/,*: ";
	cin >> aritmatika;
	cout <<"Masukkan nilai kedua: ";
	cin >> b;
	 //hasil perhitungan diatas
	cout <<"Hasil perhitungan: ";
	cout << a << aritmatika << b;
	
	if (aritmatika =='+'){
		hasil = a + b;
	}
	
	
	cout <<" = " <<hasil << endl;
	
	cin.get();
	return 0;	
	
}