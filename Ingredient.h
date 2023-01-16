//	FILE			:	Ingredient.h
//	PROJECT			:	Meal Planner
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:

#pragma once



class Ingredient
{
private:
	//	Main Data Members
	char*	name;
	char*	uom;			//	Unit of measurement
	int		amount;		
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
	int		GetAmount(void);

	//	Mutators
	int		SetName(void);
	int		SetUOM(void);
	int		SetAmount(void);



	//	Overload the add and subtract operators to correctly add ingredient amounts
};

