#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;


int main(int argc, char** argv)
{
	char kata [20];
	int inputkata ;
	int i ;
	int jumlah;
	int belakang ;
	bool palindrom = true ;

	//judul
	cout<<"=== APLIKASI STACK UNTUK MEMBALIK KALIMAT === \n" <<endl;

	//inputkan kata
	cout<< "Masukkan kalimat : " ;
	cin>> kata;

	//menghitung huruf
	jumlah = strlen (kata) ;
	cout<< "\nJumlah huruf	: "<<jumlah<<endl;

	//menampilkan kembali kata asli
	cout<< "Kalimat asli	: "<<kata<<endl;

	//membalik kata
	inputkata = strlen (kata) ;
	cout <<"Kalimat setelah dibalik :" ;
		for (i=inputkata; i>=1;i--)
		{
			char stack =kata[i-1];
			cout<< stack;
		}

	//menentukan palindrom atau bukan
	int panjang = strlen (kata);
	belakang = panjang - 1;
	for (int a=0 ; a<panjang ; a++)

	{if ((char)tolower(kata[a])!= (char)tolower (kata[belakang]))
		{
			palindrom = false;
	 		break;
		}
	belakang--;
	}
		if (palindrom)
			cout << "\n\nTermasuk Palindrom";
		else
			cout << "\n\nBukan Palindrom ";
	getch();
	return 0;
}
