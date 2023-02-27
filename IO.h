//	FILE			:	IO.h
//	PROJECT			:	Grocery List
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:

#pragma once


#include <stdio.h>


FILE*	OpenFile(char* filepath, const char* permission);
int		CloseFile(FILE* fp);

