#include"Musteri.h"
#include<iostream>
#include"Islem.h"
#include<iomanip>
#include<fstream>
#include<Windows.h>
#include"kontrol.h"
#include"Urun.h"
using namespace std;

enum RENKLER
{
	BLACK = 0,
	BLUE = 1,
	GREEN = 2,
	CYAN = 3,
	RED = 4,
	MAGENTA = 5,
	BROWN = 6,
	LIGHTGRAY = 7,
	DARKGRAY = 8,
	LIGHTBLUE = 9,
	LIGHTGREEN = 10,
	LIGHTCYAN = 11,
	LIGHTRED = 12,
	LIGHTMAGENTA = 13,
	YELLOW = 14,
	WHITE = 15
};

void dosyadan_oku(const string & dosya_ismi)
{

	ifstream dosya(dosya_ismi.c_str());
	Kontrol nesnem;

	for (size_t i = 0; dosya; ++i) {
		string satir;
		getline(dosya, satir);

		nesnem.ayracCiz(40);
		nesnem.araCiz(40, satir);


	}
	nesnem.araCiz(40, "LISTE SONU");
	nesnem.zeminCiz(40);
};
void ana_panel()
{
	string yazi = "Ana Konrol Paneli";
	string secim1 = "1.Musteri Paneli";
	string secim2 = "2.Yonetici Paneli";
	string secim3 = "3.Cikis";
	Kontrol nesne;
	nesne.tavanCiz(40);
	nesne.araCiz(40, yazi);
	nesne.ayracCiz(40);
	nesne.araCiz(40, secim1);
	nesne.araCiz(40, secim2);
	nesne.araCiz(40, secim3);
	nesne.zeminCiz(40);
}
void musteri_panel()
{
	Kontrol nesne;
	string menu2 = "MUSTERI PANELI";
	string menusecim1 = "1.Urun al";
	string menusecim2 = "2.Islemleri Listele";
	string menusecim3 = "3.Islem sil";
	string menusecim4 = "4.Geri";
	nesne.tavanCiz(40);
	nesne.araCiz(40, menu2);
	nesne.ayracCiz(40);
	nesne.araCiz(40, menusecim1);
	nesne.araCiz(40, menusecim2);
	nesne.araCiz(40, menusecim3);
	nesne.araCiz(40, menusecim4);
	nesne.zeminCiz(40);
}
void yonetim_panel()
{
	string panel = "YONETICI PANELI";
	string panel1 = "1.Musteri Ekle";
	string panel2 = "2.Musteri Listele";
	string panel3 = "3.Musteri sil";
	string panel4 = "4.Urun Ekle";
	string panel5 = "5.Urunleri Listele";
	string panel6 = "6.Urun Sil";
	Kontrol nesne;
	nesne.tavanCiz(40);
	nesne.araCiz(40, panel);
	nesne.ayracCiz(40);
	nesne.araCiz(40, panel1);
	nesne.araCiz(40, panel2);
	nesne.araCiz(40, panel3);
	nesne.araCiz(40, panel4);
	nesne.araCiz(40, panel5);
	nesne.araCiz(40, panel6);
	nesne.zeminCiz(40);
}

void kontrol(string tcnum, const string & dosya_ismi)
{
	string satir;
	ifstream dosya(dosya_ismi.c_str());

	ofstream temp("Temp.txt");
	Musteri nesne;
	while (!dosya.eof())
	{

		string tcno;
		string isim;

		getline(dosya, satir);

		if (satir.length() == 0)
			break;
		if (satir[0] != tcnum[0] && satir[1] != tcnum[1] && satir[2] != tcnum[2] && satir[3] != tcnum[3])
		{

			temp << satir << endl;
		}
	}
	dosya.close();
	temp.close();
	remove(dosya_ismi.c_str());
	rename("Temp.txt", dosya_ismi.c_str());

}

void panel_islem(int secim)
{
	Musteri nesn;
	Kontrol nesne;
	Urun nesene;
	Islem nsn;
	string eklenen1 = "EKLENEN Urun";
	string isim1 = "Urun Adi..........:" + nesene.urunAdiGetir();
	string soyisim1 = "Urun kodu.......:" + nesene.urunKoduGetir();
	string fiyat = "fiyat..........:" + nesene.fiyatGetir();
	string tcno_konrol;
	string urun_kontrol;
	string urun_liste = "URUN LISTESI";
	string musteri_liste = "MUSTERILER LISTESI";
	string eklenen = "EKLENEN MUSTERI";
	string isim = "Isim..........:" + nesn.isimGetir();
	string soyisim = "Soyisim.......:" + nesn.soyisimGetir();
	string tcno = "tcno..........:" + nesn.tcnoGetir();
	string tel = "tel.........:" + nesn.telnoGetir();
	string tarih = "tarih.......:" + nesn.gungetir() + "/" + nesn.aygetir() + "/" + nesn.yilgetir();

	switch (secim)
	{
	case 1:
		nesne.tavanCiz(40);
		nesne.araCiz(40, eklenen);
		nesne.ayracCiz(40);
		nesne.araCiz(40, isim);
		nesne.araCiz(40, soyisim);
		nesne.araCiz(40, tcno);
		nesne.araCiz(40, tel);
		nesne.araCiz(40, tarih);
		nesne.zeminCiz(40);
		nesn.kaydet();
		break;
	case 2:
		nesne.tavanCiz(40);
		nesne.araCiz(40, musteri_liste);
		dosyadan_oku(nesn.dosyam());
		break;
	case 3:
		nesne.tavanCiz(40);
		nesne.araCiz(40, musteri_liste);
		dosyadan_oku(nesn.dosyam());
		cout << "TC No Gir";
		cin >> tcno_konrol;
		kontrol(tcno_konrol, nesn.dosyam());

		break;
	case 4:
		nesne.tavanCiz(40);
		nesne.araCiz(40, eklenen1);
		nesne.ayracCiz(40);
		nesne.araCiz(40, isim1);
		nesne.araCiz(40, soyisim1);
		nesne.araCiz(40, fiyat);
		nesne.zeminCiz(40);
		nesene.kaydet();
		break;
	case 5:
		nesne.tavanCiz(40);
		nesne.araCiz(40, urun_liste);
		dosyadan_oku(nesene.dosyam());
		break;
	case 6:
		nesne.tavanCiz(40);
		nesne.araCiz(40, urun_liste);
		dosyadan_oku(nesene.dosyam());
		cout << "Urun Kodu Gir::::";
		cin >> urun_kontrol;
		kontrol(urun_kontrol, nesene.dosyam());
		break;
	default:
		break;
	}
}
int main()
{
	Musteri nesn;
	Kontrol nesne;
	Urun nesene;
	Islem nsn;
	nesne.renkAta(14);
	
	int secim;
	int menusecim;
	int panelsecim;
	string tcno;
	string urunkodu;
	string urun_kontrol;

	string menu = "MUSTERILER LISTESI";
	string menu4 = "ISLEMLER LISTESI";
	string menu3 = "URUNLER LISTESI";
	string son = "LISTE SONU";

	
	


	do {
		system("cls");
		ana_panel();
		cout << "Secim....:";
		cin >> secim;
		switch (secim)
		{
		case 1:
			nesne.tavanCiz(40);
			nesne.araCiz(40, menu3);
			nesn.kaydet();
			nesne.ayracCiz(40);
			dosyadan_oku(nesn.dosyam());
			cout << "Tc no Gir..:";
			cin >> tcno;
			nsn.tcNoGetir(tcno);
			musteri_panel();
			cout << "Secim....:";
			cin >> menusecim;
			switch (menusecim)
			{
			case 1:
				nesne.tavanCiz(40);
				nesne.araCiz(40, menu3);
				nesne.ayracCiz(40);
				nesene.kaydet();
				nesne.zeminCiz(40);
				dosyadan_oku(nesene.dosyam());
				cout << "Urun Kodu Gir...:";
				cin >> urunkodu;
				nsn.urunKoduGetir(urunkodu);
				nsn.kaydet();
				break;

			case 2:
				nesne.tavanCiz(40);
				nesne.araCiz(40, menu3);
				nesne.ayracCiz(40);
				nesne.zeminCiz(40);
				dosyadan_oku(nsn.dosyam());
				break;
			case 3:
				nesne.tavanCiz(40);
				nesne.araCiz(40, menu4);
				dosyadan_oku(nesene.dosyam());
				cout << "Urun Kodu Gir::::";
				cin >> urun_kontrol;
				kontrol(urun_kontrol, nsn.dosyam());
				break;
			default:
				cout << "hatali secim";
				break;
			}

			break;
		case 2:
			yonetim_panel();
			cout << "Secim....:";
			cin >> panelsecim;
			panel_islem(panelsecim);
			break;

		case 3:
			
			break;
		default:
			break;

		}
		system("pause");

	} while (secim != 3);

}