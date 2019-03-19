#pragma once
#ifndef URUN_H
#define URUN_H
#include<string>
using namespace std;

class Urun
{
public:
	Urun();
	

	void	kaydet();

	string	urunAdiGetir();
	string	urunKoduGetir();
	string	fiyatGetir();
	string dosyam();
	void	urunAdiAta(string urunAdi);
	void	urunKoduAta(string urunkodu);	
	void	fiyatAta(int fiyatt);

private:

	string	mUrunKodu;
	string	mUrunAdi;
	string	mFiyat;
	string  dosya;
};
#endif