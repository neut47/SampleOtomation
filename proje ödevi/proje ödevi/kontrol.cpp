
#include<string>
#include <iostream>
#include<iomanip>
#include<Windows.h>
#include "kontrol.h"
using namespace std;
char DUZCIZGI = 205;
char SOLUSTKOSE = 201;
char SAGUSTKOSE = 187;
char DIKEYCIZGI = 186;
char ASAGIAYRAC = 203;
char SOLALTKOSE = 200;
char SAGALTKOSE = 188;
char YUKARIAYRAC = 202;
char YATAYSAGAAYRAC = 204; 
char YATAYSOLAAYRAC = 185;
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
void Kontrol::renkAta(int yazirenk)
{
	int arkaplan = 0;

	int sonRenk;

	sonRenk = (16 * arkaplan) + yazirenk;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), sonRenk);
}

void Kontrol::tavanCiz(int genislik)
{
	cout << SOLUSTKOSE;

	for (int i = 0; i < genislik; i++)
		cout << DUZCIZGI;

	cout << SAGUSTKOSE;

	cout << endl;

}

void Kontrol::zeminCiz(int genislik)
{
	cout << SOLALTKOSE;

	for (int i = 0; i < genislik; i++)
		cout << DUZCIZGI;

	cout << SAGALTKOSE;

	cout << endl;
}
void Kontrol::araCiz(int genislik, string yazi)
{
	cout << DIKEYCIZGI;

	cout << std::left << setw(genislik) << yazi;

	cout << DIKEYCIZGI;
	cout << endl;
}

void Kontrol::ayracCiz(int genislik)
{
	cout << YATAYSAGAAYRAC;

	for (int i = 0; i < genislik; i++)
		cout << DUZCIZGI;

	cout << YATAYSOLAAYRAC;

	cout << endl;
}