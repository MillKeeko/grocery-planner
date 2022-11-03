//	FILE			:	Ingredient.cpp
//	PROJECT			:	Dinner List
//	PROGRAMMER		:	William Anderson
//	FIRST VERSION	:	2022-11-02


#include "Ingredient.h"
#include <stdio.h>
#include <string.h>


//  METHOD			:	Ingredient()
//	DESCRIPTION		:	This method is a default constructor that sets data members to meaningless values.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
Ingredient::Ingredient(void)
{
	name = NULL;
	uom = NULL;
	amount = 0;
	nameCopy = NULL;
	uomCopy = NULL;
}

//  METHOD			:	~Ingredient()
//	DESCRIPTION		:	This method is a destructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
Ingredient::~Ingredient(void)
{

}

//  METHOD			:	GetName()
//	DESCRIPTION		:	This method is an accessor for the name data member.
//	PARAMETERS		:	N/A
//	RETURN			:	char* - a pointer to an address containing name's value, but not a pointer to name's address.
char* Ingredient::GetName(void)
{
	strcpy(nameCopy, name);		// Should I use strcpy_s???
	return nameCopy;
}

//  METHOD			:	Ingredient()
//	DESCRIPTION		:	This method is an accessor for the unit of measurement data member.
//	PARAMETERS		:	N/A
//	RETURN			:	char* - a pointer to an address containing the uom's value, but not a pointer to the uom's address.
char* Ingredient::GetUOM(void)
{
	strcpy(uomCopy, uom);
	return uomCopy;
}

//  METHOD			:	Ingredient()
//	DESCRIPTION		:	This method is an accessor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
int	Ingredient::GetAmount(void)
{
	return amount;
}

//  METHOD			:	Ingredient()
//	DESCRIPTION		:	This method is a mutator.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
int	Ingredient::SetName(void)
{

}

//  METHOD			:	Ingredient()
//	DESCRIPTION		:	This method is a mutator.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
int	Ingredient::SetUOM(void)
{

}

//  METHOD			:	SetAmount()
//	DESCRIPTION		:	This method is a mutator.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
int	Ingredient::SetAmount(void)
{

}