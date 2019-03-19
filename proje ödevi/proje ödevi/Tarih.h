#pragma once
#include<iostream>
#include<string.h>
using namespace std;

struct Tarih
{
public:
	Tarih();
	string gungetir();
	string aygetir();
	string yilgetir();
private:
	string mGun;
	string mAy;
	string mYil;
	
};
