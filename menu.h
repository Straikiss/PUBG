#ifndef PUBG_MENU_H
#define PUBG_MENU_H

void SHOWINFO()
{
	WRITE1("AVM = 132 damage");
	WRITE1("KAR98 = 72 damage");
	WRITE1("AK47/GROZA = 48 damage");
	WRITE2("M416/SCAR-L/M16A4/AUG = 41 damage");
	
	WRITE1("Helmet 3 = 230xp & 55% - damage");
	WRITE1("Helmet 2 = 150xp & 40% - damage");
	WRITE2("Helmet 1 = 80xp & 30% - damage");
	
	WRITE1("Flack jacket 3 = 250 & 55% - damage");
	WRITE1("Flack jacket 2 = 220 & 40% - damage");
	WRITE1("Flack jacket 1 = 200 & 30% - damage");
}

void SHOWMENU()
{
	WRITE2("Menu: ");
	
	WRITE1("[AVM] in 3d helmet, enter avmh3");
	WRITE1("[AVM] in 3d flak jacket, enter avmj3");
	WRITE1("[AVM] in 2d helmet, enter avmh2");
	WRITE1("[AVM] in 2d flak jacket, enter avmj2");
	WRITE1("[AVM] in 1d helmet, enter avmh1"); 
	WRITE2("[AVM] in 1d flak jacket, enter avmj1");
	
	WRITE1("[KAR98] in 3d helmet, enter kar98h3");
	WRITE1("[KAR98] in 3d flak jacket, enter kar98j3");
	WRITE1("[KAR98] in 2d helmet, enter kar98h2");
	WRITE1("[KAR98] in 2d flak jacket, enter kar98j2");
	WRITE1("[KAR98] in 1d helmet, enter kar98h1");
	WRITE2("[KAR98] in 1d flak jacket, enter kar98j1");
  
	WRITE1("[AK47/GROZA] in 3d helmet, enter ak47h3");
	WRITE1("[AK47/GROZA] in 3d flak jacket, enter ak47j3");
	WRITE1("[AK47/GROZA] in 2d helmet, enter ak47h2");
	WRITE1("[AK47/GROZA] in 2d flak jacket, enter ak47j2");
	WRITE1("[AK47/GROZA] in 1d helmet, enter ak47h1");
	WRITE2("[AK47/GROZA] in 1d flak jacket, enter ak47j1");

	WRITE1("[M416/SCAR-L/M16A4/AUG] in 3d helmet, enter m416h3");
	WRITE1("[M416/SCAR-L/M16A4/AUG] in 3d flak jacket, enter m416j3");
	WRITE1("[M416/SCAR-L/M16A4/AUG] in 2d helmet, enter m416h2");
	WRITE1("[M416/SCAR-L/M16A4/AUG] in 2d flak jacket, enter m416j2");
	WRITE1("[M416/SCAR-L/M16A4/AUG] in 1d helmet, enter m416h1"); 
	WRITE1("[M416/SCAR-L/M16A4/AUG] in 1d flak jacket, enter m416j1");
}

void STARTMENU()
{
	string ANSWER;
	int CLOSE;
  
	Sleep(1000);
	SHOWMENU();

	do
	{
		cout << endl;
		cout << "-> ";
		cin >> ANSWER;
		cout << endl;

		if(ANSWER == "avmh3") 
	    {
			RUNINFOHELMET(AVM, HELMETXPLEVEL3);
	    }

	    if(ANSWER == "avmh2") 
	    {
			RUNINFOHELMET(AVM, HELMETXPLEVEL2);
	    }
	
	    if(ANSWER == "avmh1") 
	    {
			RUNINFOHELMET(AVM, HELMETXPLEVEL1);
	    }
	
	    if(ANSWER == "kar98h3") 
	    {
			RUNINFOHELMET(KAR98, HELMETXPLEVEL3);
	    }
	
	    if(ANSWER == "kar98h2") 
	    {
			RUNINFOHELMET(KAR98, HELMETXPLEVEL2);
	    }
	
	    if(ANSWER == "kar98h1") 
	    {
			RUNINFOHELMET(KAR98, HELMETXPLEVEL1);
	    }
	
	    if(ANSWER == "ak47h3") 
	    {
			RUNINFOHELMET(AK47, HELMETXPLEVEL3);
	    }
	
	    if(ANSWER == "ak47h2") 
	    {
			RUNINFOHELMET(AK47, HELMETXPLEVEL2);
	    }
	
	    if(ANSWER == "ak47h1") 
	    {
			RUNINFOHELMET(AK47, HELMETXPLEVEL1);
	    }
	
	    if(ANSWER == "m416h3") 
	    {
			RUNINFOHELMET(M416, HELMETXPLEVEL3);
	    }
	
	    if(ANSWER == "m416h2") 
	    {
			RUNINFOHELMET(M416, HELMETXPLEVEL2);
	    }
	
	    if(ANSWER == "m416h1") 
	    {
			RUNINFOHELMET(M416, HELMETXPLEVEL1);
	    }
	
	    if(ANSWER == "avmj3") 
	    {
			RUNINFOFLAKJACKET(AVM, FLAKJACKETXPLEVEL3);
	    }
	
	    if(ANSWER == "avmj2") 
	    {
			RUNINFOFLAKJACKET(AVM, FLAKJACKETXPLEVEL2);
	    }
	
	    if(ANSWER == "avmj1") 
	    {
			RUNINFOFLAKJACKET(AVM, FLAKJACKETXPLEVEL1);
	    }
	
	    if(ANSWER == "kar98j3") 
	    {
			RUNINFOFLAKJACKET(KAR98, FLAKJACKETXPLEVEL3);
	    }
	
	    if(ANSWER == "kar98j2") 
	    {
			RUNINFOFLAKJACKET(KAR98, FLAKJACKETXPLEVEL2);
	    }
	
	    if(ANSWER == "kar98j1") 
	    {
			RUNINFOFLAKJACKET(KAR98, FLAKJACKETXPLEVEL1);
	    }
	
	    if(ANSWER == "ak47j3") 
	    {
			RUNINFOFLAKJACKET(AK47, FLAKJACKETXPLEVEL3);
	    }
	
	    if(ANSWER == "ak47j2") 
	    {
			RUNINFOFLAKJACKET(AK47, FLAKJACKETXPLEVEL2);
	    }
	
	    if(ANSWER == "ak47j1") 
	    {
			RUNINFOFLAKJACKET(AK47, FLAKJACKETXPLEVEL1);
	    }
	
	    if(ANSWER == "m416j3") 
	    {
			RUNINFOFLAKJACKET(M416, FLAKJACKETXPLEVEL3);
	    }
	
	    if(ANSWER == "m416j2") 
	    {
			RUNINFOFLAKJACKET(M416, FLAKJACKETXPLEVEL2);
	    }
	
	    if(ANSWER == "m416j1") 
	    {
			RUNINFOFLAKJACKET(M416, FLAKJACKETXPLEVEL1);
	    }
	
	    if(ANSWER == "help" || ANSWER == "Help")
	    {
			Sleep(1000);
			WRITE1("Write [info] to show some info stats");
			WRITE1("Write [clear] to clear console");
			WRITE1("Write [exit] to exit");
	    }
		
	    if(ANSWER == "info" || ANSWER == "Info")
	    {
			Sleep(1000);
			SHOWINFO();
	    }
	
	    if(ANSWER == "clear" || ANSWER == "Clear") 
	    {
			WRITE1("Clearing...");
			Sleep(1000);
			system("cls");
			SHOWMENU();
	    }
	    
	    if(ANSWER == "exit" || ANSWER == "Exit") 
	    {
			WRITE1("Closing...");
			Sleep(1000);
			CLOSE = 1;
	    }
	} 
	while(CLOSE != 1);
}

#endif // PUBG_MENU_H
