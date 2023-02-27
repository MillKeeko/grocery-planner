//	FILE			:	Ingredient.h
//	PROJECT			:	Meal Planner
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:


#pragma once


#pragma warning(disable: 4996)


class Ingredient
{
private:
	//	Main Data Members
	char*	name;
	char*	uom;			//	Unit of measurement
	int		quantity;		
	bool	staple;

	//	Auxiliary Data Members
	char*	nameCopy;
	char*	uomCopy;

public:
	//	Constructors
	Ingredient(void);

	//	Destructor
	~Ingredient(void);

	//	Accessors
	char*	GetName(void);
	char*	GetUOM(void);
	int		GetQuantity(void);

	//	Mutators
	int		SetName(void);
	int		SetUOM(void);
	int		SetQuantity(void);

	//	Overload the add and subtract operators to correctly add ingredient amounts
};
