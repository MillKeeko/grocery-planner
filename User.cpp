//	FILE			:	User.cpp
//	PROJECT			:	Grocery List
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:	

#include "User.h"

//  METHOD			:	User()
//	DESCRIPTION		:	A constructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
User::User(void)
{
	name = NULL;
	nameCopy = NULL;
}


//  METHOD			:	~User()
//	DESCRIPTION		:	A destructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
User::~User(void)
{

}


//  METHOD			:	GetName()
//	DESCRIPTION		:	An accessor for the name data member.
//	PARAMETERS		:	N/A
//	RETURN			:	char* - a pointer to an address containing name's
//						value, but not a pointer to name's address.
char* User::GetName(void)
{
	strcpy(nameCopy, name);
	return nameCopy;
}