#include <iostream>

using namespace std;

void FirstClass(int x[][2]) {
	int ctrl=-1;
	for (int p = 0; p < 5; p++) {
		if (x[p][1] == 0) { // First Class bolumunde bos koltuk varsa;
			x[p][1] = 1; // Koltuk doluluk durumunu 1 yap.
			cout << " " << endl;
			cout << "First Class | " << p + 1 << " numarali koltuk rezervasyonu yapilmistir." << endl;
			cout << " " << endl;
			ctrl = 0;
			break;
		}
	}
	if (ctrl == -1) { // bos koltuk yoksa;
		cout << " " << endl;
		cout << "First Class icin bos koltuk kalmamistir." << endl;
		cout << " " << endl;
	}
}

void Economy(int x[][2]) {
	int ctrl = -1;
	for (int p = 5; p < 10; p++) {
		if (x[p][1] == 0) { // Economy bolumunde bos koltuk varsa;
			x[p][1] = 1; // Koltuk doluluk durumunu 1 yap.
			cout << " "<<endl;
			cout << "Economy | " << p + 1 << " numarali koltuk rezervasyonu yapilmistir." << endl;
			cout << " " << endl;
			ctrl = 0;
			break;
		}
	}
	if (ctrl == -1) { // bos koltuk yoksa;
		cout << " " << endl;
		cout << "Economy icin bos koltuk kalmamistir." << endl;
		cout << " " << endl;
	}
}

void Menu() {
		cout << "=============================" << endl;
		cout << "| 1) First Class Koltuk     |" << endl;
		cout << "| 2) Economy Koltuk         |" << endl;
		cout << "| 3) Ucak Koltuk Durumu     |" << endl;
		cout << "| 4) Bos Koltuk Sayisi      |" << endl;
		cout << "| 5) Sonlandir              |" << endl;
		cout << "=============================" << endl;
		cout << "Islem numarasi giriniz: ";
}

void UcakDurum(int x[][2]) {
	cout << " " << endl;
	cout << "  ^  " << endl;
	cout << "^   ^" << endl;
	for (int h = 0; h < 10; h++) {
		cout << x[h][0];
		if (x[h][1] == 1) {
			if (h == 9) {
				cout << "  x" << endl;
				break;
			}
			cout << "   x" << endl;
		}
		else {
			cout << "    " << endl;
		}
	}
	cout << "=====" << endl;
	cout << " " << endl;
}

void KoltukSayisi(int x[][2]) {
	int sayac=0;
	for (int p = 0; p < 10; p++) {
		if (x[p][1] == 0) { // First Class bolumunde bos koltuk varsa;
			sayac += 1;
		}
	}
	if (sayac == 0) {
		cout << " " << endl;
		cout << "Ucakta bos koltuk kalmamistir." << endl;
		cout << " " << endl;
	}
	else {
		cout << " " << endl;
		cout << "Ucakta " << sayac << " koltuk bos durumdadir." << endl;
		cout << " " << endl;
	}
	
}

int main()
{
	// (1-5 First Class) - (6-10 Economy)
	int ucak_koltuklar[10][2]; // iki boyutlu dizi.
	int secim;
	for (int i = 0; i < 10; i++) {
		ucak_koltuklar[i][0] = i + 1; // 10 satir, 2 sutun var. 1. sutun koltuk numarasi. 2. sutun doluluk durumu.
		ucak_koltuklar[i][1] = 0; // doluluk durumlari baslangicta hepsinin 0 olmali.
	}
	while (1) {
		Menu();
		cin >> secim;
		switch (secim)
		{
		case 1:
			FirstClass(ucak_koltuklar);
			break;
		case 2:
			Economy(ucak_koltuklar);
			break;
		case 3:
			UcakDurum(ucak_koltuklar);
			break;
		case 4:
			KoltukSayisi(ucak_koltuklar);
			break;
		case 5:
			return 0;
		default:
			cout << "Hatali bir islem numarasi girdiniz." << endl;
			break;
		}
	}
}
