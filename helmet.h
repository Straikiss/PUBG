#ifndef PUBG_HELMET_H
#define PUBG_HELMET_H

void RUNINFOHELMET(const int TYPE1, const int TYPE2)
{
	int STATUS1, STATUS2;
	float TYPE3;
  
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
	
	STATUS1 = (TYPE1 * HELMETX) * TYPE3;
	STATUS2 = TYPE1 * HELMETX;
    
	cout << endl;  

	if(TYPE1 == AVM) 
	{
		if(TYPE2 == HELMETXPLEVEL3)
		{
			WRITE2("[AVM in 3d helmet]");
		}
	
		if(TYPE2 == HELMETXPLEVEL2)
		{
			WRITE2("[AVM in 2d helmet]");
		}
	
		if(TYPE2 == HELMETXPLEVEL1)
		{
			WRITE2("[AVM in 1d helmet]");
		}
	}

	if(TYPE1 == KAR98) 
	{
		if(TYPE2 == HELMETXPLEVEL3)
		{
			WRITE2("[KAR98 in 3d helmet]");
		}
		
		if(TYPE2 == HELMETXPLEVEL2)
		{
			WRITE2("[KAR98 in 2d helmet]");
		}
		
		if(TYPE2 == HELMETXPLEVEL1)
		{
			WRITE2("[KAR98 in 1d helmet]");
		}
	}

	if(TYPE1 == AK47) 
	{
		if(TYPE2 == HELMETXPLEVEL3)
		{
		    WRITE2("[AK47 in 3d helmet]");
		}
		
		if(TYPE2 == HELMETXPLEVEL2)
		{
			WRITE2("[AK47 in 2d helmet]");
		}
		
		if(TYPE2 == HELMETXPLEVEL1)
		{
		    WRITE2("[AK47 in 1d helmet]");
		}
	}

	if(TYPE1 == M416) 
	{
		if(TYPE2 == HELMETXPLEVEL3)
		{
			WRITE2("[M416 in 3d helmet]");
		}
		
		if(TYPE2 == HELMETXPLEVEL2)
		{
			WRITE2("[M416 in 2d helmet]");
		}
		
		if(TYPE2 == HELMETXPLEVEL1)
		{
			WRITE2("[M416 in 1d helmet]");
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
		WRITE2("[Your helmet was destroyed]");
		WRITE1("Helmet xp: ");
		cout << "Now: " << STATUS3 << endl;
	} 
	else 
	{
		cout << endl;
		WRITE1("Helmet xp: ");
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

#endif // PUBG_HELMET_H
