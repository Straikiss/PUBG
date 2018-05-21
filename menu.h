#ifndef PUBG_MENU_H
#define PUBG_MENU_H

void DisplaySleep();
void DisplayClear();
void OpenGmail();
void OpenGithub();
void OpenBoth();

void ShowMenu()
{
	const int MenuLength = 31;

	string MainMenu[MenuLength] = {
		"Menu: \n",

		"[AVM] in 3d helmet, enter avm_h3",
		"[AVM] in 3d flak jacket, enter avm_f3",
		"[AVM] in 2d helmet, enter avm_h2",
		"[AVM] in 2d flak jacket, enter avm_f2",
		"[AVM] in 1d helmet, enter avm_h1",
		"[AVM] in 1d flak jacket, enter avm_f1 \n",

		"[KAR98] in 3d helmet, enter kar98_h3",
		"[KAR98] in 3d flak jacket, enter kar98_f3",
		"[KAR98] in 2d helmet, enter kar98_h2",
		"[KAR98] in 2d flak jacket, enter kar98_f2",
		"[KAR98] in 1d helmet, enter kar98_h1",
		"[KAR98] in 1d flak jacket, enter kar98_f1 \n",

		"[AKM/GROZA] in 3d helmet, enter akm_h3",
		"[AKM/GROZA] in 3d flak jacket, enter akm_f3",
		"[AKM/GROZA] in 2d helmet, enter akm_h2",
		"[AKM/GROZA] in 2d flak jacket, enter akm_f2",
		"[AKM/GROZA] in 1d helmet, enter akm_h1",
		"[AKM/GROZA] in 1d flak jacket, enter akm_f1 \n",

		"[M416/SCAR-L/M16A4/AUG] in 3d helmet, enter m416_h3",
		"[M416/SCAR-L/M16A4/AUG] in 3d flak jacket, enter m416_f3",
		"[M416/SCAR-L/M16A4/AUG] in 2d helmet, enter m416_h2",
		"[M416/SCAR-L/M16A4/AUG] in 2d flak jacket, enter m416_f2",
		"[M416/SCAR-L/M16A4/AUG] in 1d helmet, enter m416_h1",
		"[M416/SCAR-L/M16A4/AUG] in 1d flak jacket, enter m416_f1 \n",

		"Info - show some info stats",
		"Clear - clear up console",
		"ShowMenu - show menu if it was lost",
		"Contacts - show contacts",
		"RunTestConf - run test configuration",
		"Exit - close the program"
	};

	for(int i = 0; i < MenuLength; i++)
	{
		WriteE(MainMenu[i]);
	}
}

void RunTestConf()
{
	char AnswerArmor;
	char AnotherAnswer;
	string AnswerSave;
	int AnswerHits = 1;
	int WeaponDamage;
	int ArmorXp;
	string FileName;
	double CountXDamageToHelet = 2.3;

	Write("Helmet [h] or !flack jacket [f] doesnt work yet!: ");
	cin >> AnswerArmor;

	Write("Do you wanna add some extra parameters (hits, helmet x damage)? [y/n]: ");
	cin >> AnotherAnswer;

	if(AnotherAnswer == 'y')
	{
		Write("How many hits?: [1 - 3]: ");
		cin >> AnswerHits;

		Write("X damage in helmet 2.3/230% or 2.67/267% default [1 - 3]: ");
		cin >> CountXDamageToHelet;
	}

	if(AnswerArmor == 'h')
	{
		Write("Enter weapon damage: ");
		cin >> WeaponDamage;

		Write("Enter armor xp, 230(tier 3), 150(tier 2), 80(tier 1): ");
		cin >> ArmorXp;

		Write("Wanna save (save repeat if file name is same, save w/ same name, dont save)? [sr/sn/n]: ");
		cin >> AnswerSave;

		if(AnswerSave == "sr" || AnswerSave == "sn")
		{
			Write("File name (w/t space): ");
			cin >> FileName;

			DisplaySleep();
			cout << endl;
			cout << "Saved as " << FileName << endl;
		}

		cout << endl;

		if(AnswerHits < 0)
		{
			AnswerHits = 1;
		}

		if(AnswerHits == 1)
		{
			RunInfoHelmetX(WeaponDamage, ArmorXp, AnswerHits, CountXDamageToHelet, AnswerSave, FileName);
		}

		if(AnswerHits == 2)
		{
			RunInfoHelmetX(WeaponDamage, ArmorXp, AnswerHits, CountXDamageToHelet, AnswerSave, FileName);
		}

		if(AnswerHits == 3)
		{
			RunInfoHelmetX(WeaponDamage, ArmorXp, AnswerHits, CountXDamageToHelet, AnswerSave, FileName);
		}
	}

	/*if(AnswerArmor == 'f')
	{
		cout << "Enter weapon damage: ";
		cin >> WeaponDamage;

		cout << "Enter armor xp, 250(tier 3), 220(tier 2), 200(tier 1): ";
		cin >> ArmorXp;

		cout << endl;

		RunInfoFlackjacket(WeaponDamage, ArmorXp);
	}*/

}

void ShowContacts()
{
	WriteE("Contacts: ");
	WriteE("Gmail: starko.web@gmail.com");
	WriteE("Github: github.com/straikiss");
	WriteE("If you wanna open gmail or github or both, enter to console [Gmail, Github, OpenBoth]");
}

void ShowInfo()
{
	const int InfoLength = 10;

	string MainMenu[InfoLength] = {
		"AVM = 132 damage",
		"KAR98 = 72 damage",
		"AKM/GROZA = 49 damage",
		"M416/SCAR-L/M16A4/AUG = 43 damage \n",

		"Helmet 3 = 230xp & 55% - damage",
		"Helmet 2 = 150xp & 40% - damage",
		"Helmet 1 = 80xp & 30% - damage \n",

		"Flack jacket 3 = 250 & 55% - damage",
		"Flack jacket 2 = 220 & 40% - damage",
		"Flack jacket 1 = 200 & 30% - damage"
	};

	for(int i = 0; i < InfoLength; i++)
	{
		WriteE(MainMenu[i]);
	}
}

void RunProgram()
{
	ShowMenu();

	string Answer;
	int Close;

	do
	{
		cout << endl;
		Write("-> ");
		cin >> Answer;
		cout << endl;

		if(Answer == "avm_h3")
		{
			RunInfoHelmet(AVM, HELMETXPLEVEL3);
		}

		if(Answer == "avm_h2")
		{
			RunInfoHelmet(AVM, HELMETXPLEVEL2);
		}

		if(Answer == "avm_h1")
		{
			RunInfoHelmet(AVM, HELMETXPLEVEL1);
		}

		if(Answer == "kar98_h3")
		{
			RunInfoHelmet(KAR98, HELMETXPLEVEL3);
		}

		if(Answer == "kar98_h2")
		{
			RunInfoHelmet(KAR98, HELMETXPLEVEL2);
		}

		if(Answer == "kar98_h1")
		{
			RunInfoHelmet(KAR98, HELMETXPLEVEL1);
		}

		if(Answer == "akm_h3")
		{
			RunInfoHelmet(AKM, HELMETXPLEVEL3);
		}

		if(Answer == "akm_h2")
		{
			RunInfoHelmet(AKM, HELMETXPLEVEL2);
		}

		if(Answer == "akm_h1")
		{
			RunInfoHelmet(AKM, HELMETXPLEVEL1);
		}

		if(Answer == "m416_h3")
		{
			RunInfoHelmet(M416, HELMETXPLEVEL3);
		}

		if(Answer == "m416_h2")
		{
			RunInfoHelmet(M416, HELMETXPLEVEL2);
		}

		if(Answer == "m416_h1")
		{
			RunInfoHelmet(M416, HELMETXPLEVEL1);
		}

		if(Answer == "avm_f3")
		{
			RunInfoFlackjacket(AVM, FLAKJACKETXPLEVEL3);
		}

		if(Answer == "avm_f2")
		{
			RunInfoFlackjacket(AVM, FLAKJACKETXPLEVEL2);
		}

		if(Answer == "avm_f1")
		{
			RunInfoFlackjacket(AVM, FLAKJACKETXPLEVEL1);
		}

		if(Answer == "kar98_f3")
		{
			RunInfoFlackjacket(KAR98, FLAKJACKETXPLEVEL3);
		}

		if(Answer == "kar98_f2")
		{
			RunInfoFlackjacket(KAR98, FLAKJACKETXPLEVEL2);
		}

		if(Answer == "kar98_f1")
		{
			RunInfoFlackjacket(KAR98, FLAKJACKETXPLEVEL1);
		}

		if(Answer == "akm_f3")
		{
			RunInfoFlackjacket(AKM, FLAKJACKETXPLEVEL3);
		}

		if(Answer == "akm_f2")
		{
			RunInfoFlackjacket(AKM, FLAKJACKETXPLEVEL2);
		}

		if(Answer == "akm_f1")
		{
			RunInfoFlackjacket(AKM, FLAKJACKETXPLEVEL1);
		}

		if(Answer == "m416_f3")
		{
			RunInfoFlackjacket(M416, FLAKJACKETXPLEVEL3);
		}

		if(Answer == "m416_f2")
		{
			RunInfoFlackjacket(M416, FLAKJACKETXPLEVEL2);
		}

		if(Answer == "m416_f1")
		{
			RunInfoFlackjacket(M416, FLAKJACKETXPLEVEL1);
		}

		if(Answer == "RunTestConf")
		{
			DisplaySleep();
			RunTestConf();
		}

		if(Answer == "Info")
		{
			DisplaySleep();
			ShowInfo();
		}

		if(Answer == "Contacts")
		{
			ShowContacts();
		}

		if(Answer == "Gmail")
		{
			OpenGmail();
		}

		if(Answer == "Github")
		{
			OpenGithub();
		}

		if(Answer == "OpenBoth")
		{
			OpenBoth();
		}

		if(Answer == "Clear")
		{
			WriteE("Clearing...");
			DisplaySleep();
			DisplayClear();
			ShowMenu();
		}

		if(Answer == "ShowMenu")
		{
			ShowMenu();
		}

		if(Answer == "Exit")
		{
			WriteE("Closing...");
			DisplaySleep();
			Close = 1;
		}
	} while(Close != 1);
}

// func start
void DisplaySleep()
{
	Sleep(1000);
}

void DisplayClear()
{
	system("cls");
}

void OpenGmail()
{
	WriteE("Opening...");
	DisplaySleep();
	ShellExecute(0, 0, L"https://www.google.com/gmail/", 0, 0, SW_SHOW);
	DisplayClear();
	ShowMenu();
}

void OpenGithub()
{
	WriteE("Opening...");
	DisplaySleep();
	ShellExecute(0, 0, L"https://github.com/straikiss", 0, 0, SW_SHOW);
	DisplayClear();
	ShowMenu();
}

void OpenBoth()
{
	WriteE("Opening...");
	DisplaySleep();
	ShellExecute(0, 0, L"https://www.google.com/gmail/", 0, 0, SW_SHOW);
	ShellExecute(0, 0, L"https://github.com/straikiss", 0, 0, SW_SHOW);
	DisplayClear();
	ShowMenu();
}

// func end

#endif // PUBG_MENU_H
