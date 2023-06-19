#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main() {
	string baris;
	string namafile;

	cout << "Masukkan Nama File : ";
	cout << namafile;

	// membuka file dan menulis.
	ofstream outfile;
	// menunjuk ke sebuah nama file
	outfile.open(namafile + ".txt", ios::out);

	cout << ">= Menulis file, \ ketik 'q\' untuk Keluar" << endl;

	//
}