//	FILE			:	IO.cpp
//	PROJECT			:	GroceryList
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:


#include "general.h"
#include "IO.h"


//  METHOD			:	IO()
//	DESCRIPTION		:	A constructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
IO::IO(void)
{
	
}


//  METHOD			:	~IO()
//	DESCRIPTION		:	A destructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
IO::~IO(void)
{

}


//  METHOD			:	IO()
//	DESCRIPTION		:	This method opens a file and displays an 
//						error if it can't.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
FILE* IO::OpenFile(char* filepath, const char* permission)
{
	FILE* fp = NULL;
	fp = fopen(filepath, permission);
	if (fp == NULL)
	{
		printf("Can't open file.\n");;
	}
	return fp;
}


//  METHOD			:	~IO()
//	DESCRIPTION		:	This method closes a file and displays an
//						error if it can't.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
int IO::CloseFile(FILE* fp)
{
	if (fclose(fp) != 0)
	{
		printf("Can't close file.\n");
		return FAILURE;
	}
}
