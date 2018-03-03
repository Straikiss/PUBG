#ifndef PUBG_FLAKJACKET_H
#define PUBG_FLAKJACKET_H

void RUNINFOFLAKJACKET(const int TYPE1, const int TYPE2)
{
	int STATUS1, STATUS2;
	float TYPE3;

	if(TYPE2 == FLAKJACKETXPLEVEL3) 
	{
		TYPE3 = FLAKJACKETXLEVEL3;
	}

	if(TYPE2 == FLAKJACKETXPLEVEL2) 
	{
		TYPE3 = FLAKJACKETXLEVEL2;
	}

	if(TYPE2 == FLAKJACKETXPLEVEL1) 
	{
		TYPE3 = FLAKJACKETXLEVEL1;
	}
	
	STATUS1 = TYPE1 * TYPE3;
	STATUS2 = TYPE2 - TYPE1;

	if(TYPE1 == AVM) 
	{
		if(TYPE2 == FLAKJACKETXPLEVEL3)
		{
			WRITE2("[AVM in 3d flak jacket]");
		}
		
		if(TYPE2 == FLAKJACKETXPLEVEL2)
		{
			WRITE2("[AVM in 2d flak jacket]");
		}
		
		if(TYPE2 == FLAKJACKETXPLEVEL1)
		{
			WRITE2("[AVM in 1d flak jacket]");
		}
	}

	if(TYPE1 == KAR98) 
	{
		if(TYPE2 == FLAKJACKETXPLEVEL3)
		{
			WRITE2("[KAR98 in 3d flak jacket]");
		}
		
		if(TYPE2 == FLAKJACKETXPLEVEL2)
		{
			WRITE2("[KAR98 in 2d flak jacket]");
		}
		
		if(TYPE2 == FLAKJACKETXPLEVEL1)
		{
			WRITE2("[KAR98 in 1d flak jacket]");
		}
	}

	if(TYPE1 == AK47) 
	{
		if(TYPE2 == FLAKJACKETXPLEVEL3)
		{
			WRITE2("[AK47 in 3d flak jacket]");
		}
		
		if(TYPE2 == FLAKJACKETXPLEVEL2)
		{
			WRITE2("[AK47 in 2d flak jacket]");
		}
		
		if(TYPE2 == FLAKJACKETXPLEVEL1)
		{
			WRITE2("[AK47 in 1d flak jacket]");
		}
	}

	if(TYPE1 == M416) 
	{
		if(TYPE2 == FLAKJACKETXPLEVEL3)
		{
		    WRITE2("[M416 in 3d flak jacket]");
		}
		
		if(TYPE2 == FLAKJACKETXPLEVEL2)
		{
		    WRITE2("[M416 in 2d flak jacket]");
		}
		
		if(TYPE2 == FLAKJACKETXPLEVEL1)
		{
			WRITE2("[M416 in 1d flak jacket]");
		}
	}

	// need to fix PERSONXP - STATUS1 < 0 || PERSONXP - STATUS1 == 1
	if(PERSONXP - STATUS1 < 0 || PERSONXP - STATUS1 == 1)
	{
		WRITE2("[You're dead]");
		WRITE1("Person xp: ");
		cout << "Now: " << STATUS3 << endl;
	}
	else
	{
		WRITE1("Person xp: ");
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
		WRITE2("[Your Flak jacket was destroyed]");
		WRITE1("Flak jacket xp: ");
		cout << "Now: " << STATUS3 << endl;
	} 
	else 
	{
		cout << endl;
		WRITE1("Flak jacket xp: ");
		cout << "Now: " << STATUS2 << endl;
	}

	if(STATUS2 > TYPE2)
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
