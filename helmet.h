#ifndef PUBG_HELMET_H
#define PUBG_HELMET_H

void RunInfoHelmet(const int TYPE1, const int TYPE2)
{
	int STATUS1, STATUS2;
	double TYPE3;

	if(TYPE2 == HELMETXPLEVEL3)
	{
		TYPE3 = HELMETXLEVEL3;
	}

	if(TYPE2 == HELMETXPLEVEL2)
	{
		TYPE3 = HELMETXLEVEL2;
	}

	if(TYPE2 == HELMETXPLEVEL1)
	{
		TYPE3 = HELMETXLEVEL1;
	}

	// result is int(double)
	STATUS1 = (TYPE1 * HELMETX) * TYPE3;
	STATUS2 = TYPE1 * HELMETX;

	cout << endl;

	// need to fix PERSONXP - STATUS1 < 0 || PERSONXP - STATUS1 == 1
	if(PERSONXP - STATUS1 < 0 || PERSONXP - STATUS1 == 1)
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

	if(STATUS1 > PERSONXP)
	{
		cout << "Lost: " << PERSONXP << endl;
	}
	else
	{
		// need to fix if STATUS1 == 99 then STATUS1 = 100
		if(STATUS1 == 99)
		{
			STATUS1 = 100;
		}

		cout << "Lost: " << STATUS1 << endl;
	}

	cout << "Of: " << PERSONXP << endl;

	if(TYPE2 - STATUS2 < 0)
	{
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		WriteEE("[Your helmet was destroyed]");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		WriteE("Helmet xp: ");
		cout << "Now: " << STATUS3 << endl;
	}
	else
	{
		cout << endl;
		WriteE("Helmet xp: ");
		cout << "Now: " << TYPE2 - STATUS2 << endl;
	}

	if(STATUS2 > TYPE2)
	{
		cout << "Lost: " << TYPE2 << endl;
	}
	else
	{
		cout << "Lost: " << STATUS2 << endl;
	}

	cout << "Of: " << TYPE2 << endl << endl;
}

//

void RunInfoHelmetX(int TYPE1, int TYPE2, int AnswerHits, double CountXDamageToHelet, string AnswerSave, string FileName)
{
	int STATUS1, STATUS2;
	double TYPE3;

	if(TYPE2 == HELMETXPLEVEL3)
	{
		TYPE3 = HELMETXLEVEL3;
	}

	if(TYPE2 == HELMETXPLEVEL2)
	{
		TYPE3 = HELMETXLEVEL2;
	}

	if(TYPE2 == HELMETXPLEVEL1)
	{
		TYPE3 = HELMETXLEVEL1;
	}

	// result is int(double)
	STATUS1 = ((TYPE1 * CountXDamageToHelet) * TYPE3) * AnswerHits;
	STATUS2 = (TYPE1 * CountXDamageToHelet) * AnswerHits;

	cout << endl;

	// need to fix PERSONXP - STATUS1 < 0 || PERSONXP - STATUS1 == 1
	if(PERSONXP - STATUS1 < 0 || PERSONXP - STATUS1 == 1)
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

	if(STATUS1 > PERSONXP)
	{
		cout << "Lost: " << PERSONXP << endl;
	}
	else
	{
		// need to fix if STATUS1 == 99 then STATUS1 = 100
		if(STATUS1 == 99)
		{
			STATUS1 = 100;
		}

		cout << "Lost: " << STATUS1 << endl;
	}

	cout << "Of: " << PERSONXP << endl;

	if(TYPE2 - STATUS2 < 0)
	{
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		WriteEE("[Your helmet was destroyed]");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		WriteE("Helmet xp: ");
		cout << "Now: " << STATUS3 << endl;
	}
	else
	{
		cout << endl;
		WriteE("Helmet xp: ");
		cout << "Now: " << TYPE2 - STATUS2 << endl;
	}

	if(STATUS2 > TYPE2)
	{
		cout << "Lost: " << TYPE2 << endl;
	}
	else
	{
		cout << "Lost: " << STATUS2 << endl;
	}

	cout << "Of: " << TYPE2 << endl << endl;

	// save

	if(AnswerSave == "sr" || AnswerSave == "sn")
	{
		ofstream File;

		// save file and add another one result to a same file name
		/*
			example 
			file EXAMPLE result 1 + result 2
		*/
		if(AnswerSave == "sr")
		{
			File.open(FileName + ".txt", ios_base::app);
		}
	
		// save file and create a new one file w/ same file name
		/*
			example
			file EXAMPLE result 1 will be deleted and create a  new file EXAMPLE result 2
		*/
		if(AnswerSave == "sn")
		{
			File.open(FileName + ".txt");
		}
		
		// writing

		File << "**********" << endl << endl;

		File << FileName << endl << endl;

		File << "Stats: " << endl;
		File << "Hits: " << AnswerHits << endl;
		File << "X damage: " << CountXDamageToHelet << endl;
		File << "Weapon damage: " << TYPE1 << endl;
		File << "Armor xp: " << TYPE2 << endl << endl;

		if(PERSONXP - STATUS1 < 0 || PERSONXP - STATUS1 == 1)
		{
			File << "[You're dead]" << endl;
			File << "Person xp: " << endl;
			File << "Now: " << STATUS3 << endl;
		}
		else
		{
			File << "Person xp: " << endl;
			File << "Now: " << PERSONXP - STATUS1 << endl;
		}

		if(STATUS1 > PERSONXP)
		{
			File << "Lost: " << PERSONXP << endl;
		}
		else
		{
			// need to fix if STATUS1 == 99 then STATUS1 = 100
			if(STATUS1 == 99)
			{
				STATUS1 = 100;
			}

			File << "Lost: " << STATUS1 << endl;
		}

		File << "Of: " << PERSONXP << endl;

		if(TYPE2 - STATUS2 < 0)
		{
			File << endl;
			File << "[Your helmet was destroyed]" << endl;
			File << "Helmet xp: " << endl;
			File << "Now: " << STATUS3 << endl;
		}
		else
		{
			File << endl;
			File << "Helmet xp: " << endl;
			File << "Now: " << TYPE2 - STATUS2 << endl;
		}

		if(STATUS2 > TYPE2)
		{
			File << "Lost: " << TYPE2 << endl;
		}
		else
		{
			File << "Lost: " << STATUS2 << endl;
		}

		File << "Of: " << TYPE2 << endl << endl;

		File << "**********" << endl << endl;

		// writing

		File.close();
	}

	// save
}

//

#endif // PUBG_HELMET_H
