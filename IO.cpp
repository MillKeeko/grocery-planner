//	FILE			:	IO.cpp
//	PROJECT			:	GroceryList
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:


#include "general.h"
#include "IO.h"


//  METHOD			:	OpenFile()
//	DESCRIPTION		:	This method opens a file and displays an 
//						error if it can't.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
FILE* OpenFile(char* filepath, const char* permission)
{
	FILE* fp = NULL;
	fp = fopen(filepath, permission);
	if (fp == NULL)
	{
		printf("Can't open file.\n");;
	}
	return fp;
}


//  METHOD			:	CloseFile()
//	DESCRIPTION		:	This method closes a file and displays an
//						error if it can't.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
int CloseFile(FILE* fp)
{
	if (fclose(fp) != 0)
	{
		printf("Can't close file.\n");
		return FAILURE;
	}
	else
	{
		return SUCCESS;
	}
}

