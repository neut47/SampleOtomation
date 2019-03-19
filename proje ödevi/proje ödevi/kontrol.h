#pragma once
#ifndef KONTROL_H
#define KONTROL_H
#include<string.h>
using namespace std;
class Kontrol
{
public:

	void tavanCiz(int genislik);

	void zeminCiz(int genislik);

	void araCiz(int genislik, string yazi);

	void ayracCiz(int genislik);

	void renkAta(int yazirenk);
	
private:
};
#endif