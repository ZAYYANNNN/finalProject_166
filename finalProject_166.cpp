#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
	int panjang, lebar;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}

	virtual float Luas(int a) { return 0; }

	virtual float Keliling(int a) { return 0; }

	virtual void cekUkuran() {}

	void setY(int a) {
		this->y = a;
	}
	int getY(int a) {
		return y;
	}

	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	/*fungsi untuk mengambil atau membaca nilai x dan y*/
};

class Lingkaran :public bidangDatar { /*mmebuat class lingkaran dengan polymorphi*/ 
	void input() {
		cout << "Lingkaran di buat\n";
		int jejari;
		cout << "Masukan jari-jari lingkaran: ";
		cin >> jejari;
		setX(jejari);
	}

		float luas(int jejari) {
			return 3.14 * jejari * jejari;
		}
		float keliling(int jejari) {
			return 2 * 3.14 * jejari;
		}
	
};

class Persegipanjang :public bidangDatar { /*membuat class persegi panjang dengan polymophi dan bidang datar menjadi base class nya*/
	void input() {
		cout << "Persegi Panjang dibuat";
		int panjang;
		int lebar;
		

		cout << "masukan panjang: ";
		cin >> panjang;
		setX(panjang);

		cout << "Masukan Lebar: ";
		cin >> lebar;
		setY(lebar);

		

	}
	
	float luas(int panjang, int lebar) {
		return panjang * lebar;
	}

	float keliling(int panjang, int lebar) {
		return 2 * (panjang, lebar);
	}

};

int main() { /*main program*/
	bidangDatar* bitar;
	Lingkaran lingkaran;
	Persegipanjang perpan;
	
	

	int outin;
	cout << "Jenis Bangun Datar" << endl;
	cout << "1. Lingkaran" << endl;
	cout << "2. Persegi Panajng" << endl;
	cout << "Masukan Pilihan(1/2): ";
	cin >> outin;

	switch (outin) 
	{
	case 1:
		bitar = &lingkaran;
		bitar->input();

		cout << "Luas dari Lingkaran adalah : " << bitar->Luas(bitar->getX()) << endl;
		cout << "Keliling dari Lingkaran adalah : " << bitar->Keliling(bitar->getX()) << endl;


		system("pause");
		cout << "Apakah Anda ingin mengulang Program? (Y/N)" << endl;

	case 2:
		bitar = &perpan;
		bitar->input();
		

		cout << "Luas Persegi Panjang : " << bitar->Luas(bitar->getX()) << endl;
		cout << "Keliling Persegi panjang : " << bitar->Keliling(bitar->getY()) << endl;

		system("pause");
		cout << "Apakah Anda ingin mengulang Program? (Y/N)" << endl;
	}
};





