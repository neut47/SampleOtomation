#pragma once
#ifndef ISLEM_H
#define ISLEM_H
#include <string>

using namespace std;
class Islem
{
public:
	Islem();

	string	urunKoduGetir(string kod);
	string	tcNoGetir(string tc);
	string	islemKoduGetir();
	string dosyam();
	
	void	kaydet();
	string islemKoduUret();

private:
	string  mIslemKodu;
	string	mUrunKodu;
	string  mMusteriTcNo;
	string  dosya;

};
#endif