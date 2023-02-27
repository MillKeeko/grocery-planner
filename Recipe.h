//	FILE			:	Recipe.h
//	PROJECT			:	Grocery List
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:


#include "Ingredient.h"
#include <stdio.h>
#include <string>
#include <vector>

#pragma once


#define SUCCESS				0
#define FAILUTE				-1
#define INPUTLENGTH			121


#pragma warning(disable: 4996)


class Recipe
{
private:
	//	Main data members
	char*	name;
	int		servings;
	std::vector<Ingredient>	ingredients;
	char*	instructions;

	//	Auxilliary data members
	char*	nameCopy;
	char*	instructionsCopy;

public:
	//	Constructors
	Recipe(void);

	//	Destructors
	~Recipe(void);

	//	Accessors
	char*	GetName(void);
	int		GetServings(void);
	char*	GetInstructions(void);

	//	Mutators
	int		SetName(void);
	int		SetServings(void);
	int		SetInstructions(void);

	//	Methods
	int		CreateNew(void);
	int		DisplayAll(void);
	int		ReadIngredients(char* recipeName);
};
