#ifndef PUBG_STATS_H
#define PUBG_STATS_H

using namespace std;

const int AVM = 132;
const int KAR98 = 72;

// AKM/GROZA
const int AKM = 49;

// M416/SCAR-L/M16A4/AUG
// 1.10.11 = 44
// 1.10.12 = 43
const int M416 = 43;

const int STATUS3 = 0;

const int PERSONXP = 100;
double HELMETX = 2.3;

//const double HelmetNewX = 2.67; sks/m14 etc.

int HELMETXPLEVEL3 = 230;
int FLAKJACKETXPLEVEL3 = 250;

int HELMETXPLEVEL2 = 150;
int FLAKJACKETXPLEVEL2 = 220;

int HELMETXPLEVEL1 = 80;
int FLAKJACKETXPLEVEL1 = 200;

// 100% - 55%
double HELMETXLEVEL3 = 0.45;
double FLAKJACKETXLEVEL3 = 0.45;

// 100% - 40%
double HELMETXLEVEL2 = 0.60;
double FLAKJACKETXLEVEL2 = 0.60;

// 100% - 30%
double HELMETXLEVEL1 = 0.70;
double FLAKJACKETXLEVEL1 = 0.70;

template <typename T>
void Write(T Text)
{
	cout << Text;
}

template <typename T>
void WriteE(T Text)
{
	cout << Text << endl;
}

template <typename T>
void WriteEE(T Text)
{
	cout << Text << endl << endl;
}

#endif // PUBG_STATS_H
