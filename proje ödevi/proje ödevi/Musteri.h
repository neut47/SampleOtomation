#pragma once
#ifndef MUSTERI_H
#define MUSTERI_H

#include<string.h>
#include "Tarih.h"
using namespace std;

class Musteri
{
public:
	Musteri();
	void kaydet();
	string	tcnoGetir();
	string	telnoGetir();
	string	isimGetir();
	string	soyisimGetir();
	string gungetir();
	string aygetir();
	string yilgetir();
	string dosyam();
	void isimAta(string isim);
	void telnoAta(string telno);
	void tcnoAta(string tcno);
	void soyisimAta(string soyisim);
	string	tcnouret();
	string	telnoUret();
private:
	string mIsim;
	string mSoyisim;
	string mTcno;
	string mTelno;
	string mGun;
	string mAy;
	string mYil;
	string  dosya;
};
#endif