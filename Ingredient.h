//	FILE			:	Ingredient.h
//	PROJECT			:	Dinner List
//	PROGRAMMER		:	William Anderson
//	FIRST VERSION	:	2022-11-02

#pragma once



class Ingredient
{
private:
	//	Main Data Members
	char*	name;
	char*	uom;			//	Unit of measurement
	int		amount;		

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
	int		GetAmount(void);

	//	Mutators
	int		SetName(void);
	int		SetUOM(void);
	int		SetAmount(void);
};

