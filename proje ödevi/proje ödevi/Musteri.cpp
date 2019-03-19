#include "Musteri.h"
#include<iostream>
#include <string>
#include <fstream>
#include<iomanip>
#include<Windows.h>


using namespace  std;

string isimlerListesi[] = { "Ahmet","Osman","Ali","Mehmet","Veli","Sarp","Emrah","Eser","Erbil","Oguz","Can","Murat","Sinan","Mert","Mete","Sait","Ervah","Cihat","Orhan","Fatih","Ahu","Binnur","Bilge","Candan","Cahide","Demet","Deste","Gizem","Ece","Elanur","Fatma","Fidan","Gamze","Hale","Hilal","Irmak","Jale","Kader","Kamile","Lale" };
string soyisimlerListesi[] = { "KANDEMIR","ORHON","VURAL","YAVUZ","UZ","ERDEM","DEDE","UYANIK","ASLAN","ERKURAN","ER","DAL","KARAKUM","YILMAZ","TAHTACI","KAYA","ERGE","ONUK","TOPAL","BEDER" };

Musteri::Musteri()
{
	srand(time(NULL));
	int isimIndex = rand() % 40;
	int soyisimIndex = rand() % 20;
	
	dosya = "Musteriler.txt";
	mIsim = isimlerListesi[isimIndex];
	mSoyisim = soyisimlerListesi[soyisimIndex];
	mTcno = tcnouret();
	mTelno = telnoUret();
	Tarih nesne;
	mGun = nesne.gungetir();
	mAy = nesne.aygetir();
	mYil = nesne.yilgetir();
}
void Musteri::kaydet()
{
	std::fstream kayit;

	kayit.open("Musteriler.txt", std::fstream::in | std::fstream::out | std::fstream::app);

	if (kayit.is_open() == true)
	{
		kayit << tcnoGetir() << " " << isimGetir() << " " << soyisimGetir() << " " << " " << telnoGetir() << " " <<gungetir()<< "/" <<aygetir()<< "/" <<yilgetir() << endl;
	}

	kayit.close();
}
string Musteri::dosyam()
{
	return dosya;
}
string	Musteri::tcnoGetir()
{
	return mTcno;
}
string	Musteri::telnoGetir()
{
	return mTelno;
}
string	Musteri::isimGetir()
{
	return mIsim;
}
string Musteri::gungetir()
{
	return mGun;
}
string Musteri::aygetir()
{
	return mAy;
}
string Musteri::yilgetir()
{
	return mYil;
}
std::string	Musteri::soyisimGetir()
{
	return mSoyisim;
}

void Musteri::isimAta(std::string isim)
{
	mIsim = isim;
}
void Musteri::telnoAta(string telno)
{
	mTelno = telno;
}
void Musteri::tcnoAta(string tcno)
{
	mTcno = tcno;
}
void Musteri::soyisimAta(string soyisim)
{
	mSoyisim = soyisim;
}


string	Musteri::tcnouret()
{
	string tcno = "";

	for (int i = 0; i < 4; i++)
	{
		tcno += '1' + rand() % 9;
	}
	return tcno;
}

std::string	Musteri::telnoUret()
{
	std::string telno = "";
	for (int i = 0; i < 10; i++)
	{
		telno += '0' + rand() % 10;
	}
	return telno;
}