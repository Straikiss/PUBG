#ifndef PUBG_STATS_H
#define PUBG_STATS_H

using namespace std;

const int AVM = 132;
const int KAR98 = 72;

// AK47/GROZA
const int AK47 = 48;

// M416/SCAR-L/M16A4/AUG
const int M416 = 41;

const int STATUS3 = 0;

const int PERSONXP = 100;
const float HELMETX = 2.3;

const int HELMETXPLEVEL3 = 230;
const int FLAKJACKETXPLEVEL3 = 250;

const int HELMETXPLEVEL2 = 150;
const int FLAKJACKETXPLEVEL2 = 220;

const int HELMETXPLEVEL1 = 80;
const int FLAKJACKETXPLEVEL1 = 200;

// 100% - 55%
const float HELMETXLEVEL3 = 0.45;
const float FLAKJACKETXLEVEL3 = 0.45;

// 100% - 40%
const float HELMETXLEVEL2 = 0.60;
const float FLAKJACKETXLEVEL2 = 0.60;

// 100% - 30%
const float HELMETXLEVEL1 = 0.70;
const float FLAKJACKETXLEVEL1 = 0.70;

template <typename T>
void WRITE1(T TEXT)
{
	cout << TEXT << endl;
}

template <typename T>
void WRITE2(T TEXT)
{
	cout << TEXT << endl << endl;
}

// TYPE1 = AVM
// TYPE2 = HELMETXPLEVEL3
// void RUNINFOHELMET(const int TYPE1, const int TYPE2);
// void RUNINFOFLAKJACKET(const int TYPE1, const int TYPE2);

#endif // PUBG_STATS_H
