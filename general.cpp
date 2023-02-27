//	FILE			:	general.cpp
//	PROJECT			:	Grocery List
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:


#include "general.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>

//  FUNCTION		:	void clearCR()
//	DESCRIPTION		:	This function checks whether there is a '\n' at 
//						the end of a string. If there is, it is replaced 
//						with '\0'. ***This function is taken from Carlo 
//						Scro's SENG 1000 course at Conestoga College***
//	PARAMETERS		:	char buf()
//	RETURN			:	N/A
void clearCR(char buf[])
{
	// gets sent here from winner / loser if / else statements
	char* whereCR = strchr(buf, '\n'); 
	if (whereCR != NULL)
	{
		*whereCR = '\0';
	}
}


//	FUNCTION		:	getNum()
//	DESCRIPTION		:	This function retreives the number entered by the user. If the user does not enter a 
//						positive integer, it returns -1. Otherwise, it returns the number. ***This function is 
//						taken from Carlo Scro's SENG 1000 course at Conestoga College***
//	PARAMETERS		:	N/A
//	RETURN			:	If the user enters a positive integer, return that integer. Otherwise return -1.
int getNum(void)
{
	char record[PROMPTLENGTH] = { 0 };
	int number = 0;

	fgets(record, PROMPTLENGTH, stdin);

	if (sscanf(record, "%d", &number) != 1)
	{
		number = -1;
	}

	return number;
}