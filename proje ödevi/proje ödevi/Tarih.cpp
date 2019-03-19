#include<iostream>
#include<string.h>
#include"Tarih.h"
#include<Time.h>
using namespace std;
string tarihgün[] = { "12","15","20","29","05","06","02","25","26","30","27","19" };
string tarihay[] = { "12","05","01","07","10","06","02","11","09","08","03","04" };
string tarihyil[] = { "1912","1905","1901","1907","1910","1906","1902","1911","1909","1058","1953","1994" };
Tarih::Tarih()
{
	srand(time(NULL));
	int tarihgünIndex = rand() & 11;
	int tarihayIndex = rand() & 11;
	int tarihyilIndex = rand() & 11;
	 mGun= tarihgün[tarihgünIndex];
	mAy= tarihay[tarihayIndex];
	mYil= tarihyil[tarihyilIndex];
}
string Tarih::gungetir()
{
	return mGun;
}
string Tarih::aygetir()
{
	return mAy;
}
string Tarih::yilgetir()
{
	return mYil;
}