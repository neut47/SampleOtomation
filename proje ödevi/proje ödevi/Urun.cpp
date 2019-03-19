#include "Urun.h"
#include<iostream>
#include <string>
#include <fstream>
#include<iomanip>
#include<Windows.h>
using namespace std;
string urunListesi[] = { "Ekran_karti","Ses_Karti","Islemci","Klavye","Fare","Monitor","Ram","Sabit_Disk","Hoparlor","SSD_Disk","Notebook","Kasa","Flash_Disk","Tablet","Cep_Telefonu","Kulaklik","Yazici","Scanner","Optik_Okuyucu","Tv_Karti" };
string fiyat[] = { "20","30","43","74","63","21","47","32" };
string kodListesi[] = { "1234","4566","4314","1632","4213","3298","8593","2458","7823","8523","8257" };
Urun::Urun()
{
	srand(time(NULL));
	int fiyatIndex = rand() % 20;
	int urunIndex = rand() % 20;
	int kodIndex = rand() % 11;

	mFiyat = fiyat[fiyatIndex];
	mUrunAdi = urunListesi[urunIndex];
	mUrunKodu= kodListesi[kodIndex];
	dosya = "Urunler.txt";
}



void Urun::kaydet()
{
	std::fstream kayit;

	kayit.open("Urunler.txt", std::fstream::in | std::fstream::out | std::fstream::app);

	if (kayit.is_open() == true)
	{
		kayit << urunKoduGetir() << " " << urunAdiGetir() << " " << " " << fiyatGetir()<< endl;
	}
	
	

	kayit.close();
	
	
}
string Urun::dosyam()
{
	return dosya;
}
string	Urun::urunAdiGetir()
{
	return mUrunAdi;
}
string	Urun::urunKoduGetir()
{
	return mUrunKodu;
}
string	Urun::fiyatGetir()
{
	return mFiyat;
}
void Urun::urunAdiAta(std::string urunAdi)
{
	mUrunAdi = urunAdi;
}
void Urun::urunKoduAta(string urunkodu)
{
	mUrunKodu = urunkodu;
}
void Urun::fiyatAta(int fiyatt)
{
	fiyat[rand()%5] = fiyatt;
}
