#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main() {
	string baris;
	string namafile;

	cout << "Masukkan Nama File : ";
	cin >> namafile;

	// membuka file dan menulis.
	ofstream outfile;
	// menunjuk ke sebuah nama file
	outfile.open(namafile + ".txt", ios::out);

	cout << ">= Menulis file, \ ketik 'q\' untuk Keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		// mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		// loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		// menulis dan memasukkan nilai dari baris ke dalam file
		outfile << baris << endl;
	}
	// selesai dalam menulis sekarang menutup filenya
	outfile.close();

	// membuka file dalam mode membaca
	ifstream infile;
	// menunjuk ke sebuah file
	infile.open(namafile + ".txt", ios::in);

	cout << endl << ">= Membuka dan Membaca File" << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		// Melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			// dan tampilkan disini
			cout << baris << "\n";
		}
		// tutup file tersebut setelah selesai
		infile.close();
	}
	// jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to Open file";
	return 0;
}
