#include <iostream>
using namespace std;

int a[20];				//Deklarasi array a dengan ukuran 20
int n;					//Deklarasi variable n untuk menyimpan banyaknya elemen pada array 

void input() {			//Procedur untuk input 
	while (true) {		//Looping
		cout << "Masukkan banyaknya elemen pada array : ";		//Output ke layar
		cin >> n;		//Input dari pengguna
		if (n <= 20)	//Jika n kurang dari atau sama dengan 20
			break;		//Keluar dari loop
		else {			//Jika n lebih dari 20 
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	//Output ke layar 
		}
	}
	cout << endl;								//Output baris kosong
	cout << "===================" << endl;		//Output ke layar
	cout << "Masukkan Elemen Array" << endl;	//Output ke layar
	cout << "===================" << endl;		//Output ke layar

	for (int i = 0; 1 < n; i++) {		//Looping dengan i di mulai dari 0 hingga n-i 
		cout << "Data ke-" << (i + 1) << ": ";		//Output ke layar
		cin >> a[i];								//Input dari pengguna 
	}
}
void bubbleSortArray() {			//prosedur untuk mengurutkan array dengan metode bubble sort
	for (int i = 1; i < n; i++) {				//looping dengan i di mulai dari 1 hingga n-1
		for (int j = 0; j < n - i; j++) {		//looping dengan j di mulai dari 0 hingga n-1
			if (a[j] > a[j + 1]) {				//jika nilai pada a[j] lebih besar dari a[j+1]
				int temp = a[j];				//simpan nilai a[j] ke variabel sementara temp 
				a[j] = a[j + 1];				//assign nilai a[j+1] ke a[j]
				a[j + 1] = temp;				//assign nilai temp ke a[j=]
			}
		}
	}
}
