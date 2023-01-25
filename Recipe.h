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
	char*	GetName();
	int		GetServings();

	//	Mutators

	//	Methods
	
	int		CreateNew(void);
		
	int		DisplayAll(void);
		
	int		ReadIngredients(char* recipeName);
};
