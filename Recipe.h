//	FILE			:	Recipe.h
//	PROJECT			:	Meal Planner
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:


#include "Ingredient.h"


#pragma once


#define SUCCESS				0
#define FAILUTE				-1
#define MAXINGREDIENTS		25
#define INPUTLENGTH			121


#pragma warning(disable: 4996)


class Recipe
{
private:
	//	Main data members
	char*	name;
	int		servings;
	Ingredient ingredients[MAXINGREDIENTS];

	//	Auxilliary data members
	char* nameCopy;

public:
	//	Constructors
	Recipe(void);

	//	Destructors
	~Recipe(void);

	//	Accessors
	char*	GetName(void);
	int		GetServings(void);

	//	Mutators
	int		SetName(void);
	int		SetServings(void);

	//	Methods
	
	int		CreateNew(void);
		
	int		DisplayAll(void);
		
	int		ReadIngredients(char* recipeName);
};
