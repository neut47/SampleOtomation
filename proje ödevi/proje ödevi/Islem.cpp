#include "Islem.h"
#include<iostream>
#include <string>
#include <fstream>
#include<iomanip>
#include<Windows.h>
Islem::Islem()
{
	dosya = "Islem.txt";
	mIslemKodu = islemKoduUret();
}
void Islem::kaydet()
{
	std::fstream kayit;

	kayit.open("Islem.txt", std::fstream::in | std::fstream::out | std::fstream::app);

	if (kayit.is_open() == true)
	{
		kayit <<mUrunKodu<<" "<< mIslemKodu<<" "<<endl ;
	}

	kayit.close();
}
string Islem::urunKoduGetir(string kod)
{
	return mUrunKodu=kod;
}
string Islem::dosyam()
{
	return dosya;
}
string Islem::tcNoGetir(string tc)
{
	return mMusteriTcNo =tc;
}
string Islem::islemKoduGetir()
{
	return mIslemKodu;
}
string	Islem::islemKoduUret()
{
	srand(time(NULL));
	string kod = "";

	for (int i = 0; i < 4; i++)
	{
		kod += '1' + rand() % 9;
	}
	return kod;
}