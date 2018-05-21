#ifndef PUBG_FLAKJACKET_H
#define PUBG_FLAKJACKET_H

void RunInfoFlackjacket(const int TYPE1, const int TYPE2)
{
	int STATUS1, STATUS2;
	double TYPE3;

	if (TYPE2 == FLAKJACKETXPLEVEL3)
	{
		TYPE3 = FLAKJACKETXLEVEL3;
	}

	if (TYPE2 == FLAKJACKETXPLEVEL2)
	{
		TYPE3 = FLAKJACKETXLEVEL2;
	}

	if (TYPE2 == FLAKJACKETXPLEVEL1)
	{
		TYPE3 = FLAKJACKETXLEVEL1;
	}

	// result is int(double)
	STATUS1 = TYPE1 * TYPE3;
	STATUS2 = TYPE2 - TYPE1;

	// need to fix PERSONXP - STATUS1 < 0 || PERSONXP - STATUS1 == 1
	if (PERSONXP - STATUS1 < 0 || PERSONXP - STATUS1 == 1)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		WriteEE("[You're dead]");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		WriteE("Person xp: ");
		cout << "Now: " << STATUS3 << endl;
	}
	else
	{
		WriteE("Person xp: ");
		cout << "Now: " << PERSONXP - STATUS1 << endl;
	}

	if (STATUS1 > PERSONXP)
	{
		cout << "Lost: " << PERSONXP << endl;
	}
	else
	{
		// need to fix if STATUS1 == 99 then STATUS1 = 100
		if (STATUS1 == 99)
		{
			STATUS1 = 100;
		}

		cout << "Lost: " << STATUS1 << endl;
	}

	cout << "Of: " << PERSONXP << endl;

	if (TYPE2 - STATUS2 < 0)
	{
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		WriteEE("[Your Flak jacket was destroyed]");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		WriteE("Flak jacket xp: ");
		cout << "Now: " << STATUS3 << endl;
	}
	else
	{
		cout << endl;
		WriteE("Flak jacket xp: ");
		cout << "Now: " << STATUS2 << endl;
	}

	if (STATUS2 > TYPE2)
	{
		cout << "Lost: " << TYPE2 << endl;
	}
	else
	{
		cout << "Lost: " << TYPE2 - STATUS2 << endl;
	}

	cout << "Of: " << TYPE2 << endl << endl;
}

#endif // PUBG_FLAKJACKET_H
