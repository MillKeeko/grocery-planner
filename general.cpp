//	FILE			:	general.cpp
//	PROJECT			:	Meal Planner
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:


#include "general.h"


#include <stdio.h>
#include <stdlib.h>


//	FUNCTION		:	getStr()
//	DESCRIPTION		:	Retrieves the string entered by the user. If the user does not enter a valid string, 
//						-1 is returned as an error. 
//	PARAMETERS		:	N/A
//	RETURN			:	If the user enters a valid string, return 0. Otherwise return -1.
int getStr(void)
{
	return 0;
}


//	FUNCTION		:	getNum()
//	DESCRIPTION		:	This function retreives the number entered by the user. If the user does not enter a 
//						positive integer, it returns -1. Otherwise, it returns the number. ***This function is 
//						taken from Carlo Scro's SENG 1000 course at Conestoga College***
//	PARAMETERS		:	N/A
//	RETURN			:	If the user enters a positive integer, return that integer. Otherwise return -1.
int getNum(void)
{
	char record[INPUTLENGTH] = { 0 };
	int number = 0;

	fgets(record, INPUTLENGTH, stdin);

	if (sscanf(record, "%d", &number) != 1)
	{
		number = -1;
	}

	return number;
}