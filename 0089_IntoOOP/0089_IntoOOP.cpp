#include <iostream>
using namespace std;

class Mahasiswa{
	public: // akses modifier
		string nama;
		int umur;
		string jurusan;

		void output() {
			cout << "Nama: " << nama << endl;
			cout << "Umur: " << umur << endl;
			cout << "Jurusan: " << jurusan << endl;
		}

};

class Matakuliah {
	private:
		string kodeMk;
		string namaMk;
		int sks;
	public:
		void input() {
			cout << "Kode MK: ";
			cin >> kodeMk;
			cout << "Nama Mk: ";
			cin >> namaMk;
			cout << "SKS: ";
			cin >> sks;
		}
		void output() {
			cout << "Kode MK: " << kodeMk << endl;
			cout << "Nama MK: " << namaMk << endl;
			cout << "SKS : " << sks << endl;
		}
};
int main() {
	Mahasiswa mhs;
	Matakuliah Mk;

	mhs.nama = "Budi";
	mhs.umur = 20;
	mhs.jurusan = "Teknik Informatika";
	mhs.output();

	Mk.input();
	Mk.output();

	return 0;
}


#include <iostream>
using namespace std;

class bangunDatar {

	//akses modifier
	private:
		float panjang, lebar;
	public:
		float luas;


		void input() { // methode input persegi panjang

			cout << "Masukan panjangnya = ";
			cin >> panjang;
			cout << "Masukan lebarnya = ";
			cin >> lebar;
		}

		float hitungLuas() {
			return panjang * lebar;
		}

		void display() {
			cout << "Panjangnya = " << panjang << endl;
			cout << "Lebarnya = " << lebar << endl;
			cout << "Luasnya = " << hitungLuas << endl;
		}

};

