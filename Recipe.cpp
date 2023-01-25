//	FILE			:	Recipe.cpp
//	PROJECT			:	Meal Planner
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:


#include "Recipe.h"


#include <stdio.h>
#include <string.h>


//  METHOD			:	Recipe()
//	DESCRIPTION		:	This method is a constructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
Recipe::Recipe(void)
{
	
}

//  METHOD			:	~Recipe()
//	DESCRIPTION		:	This method is a destructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
Recipe::~Recipe(void)
{

}


//  METHOD			:	GetName()
//	DESCRIPTION		:	This method is an accessor for the name data member.
//	PARAMETERS		:	N/A
//	RETURN			:	char* - a pointer to an address containing name's value, but not a pointer to name's address.
char* Recipe::GetName(void)
{
	strcpy(nameCopy, name);
	return nameCopy;
}


//  METHOD			:	GetServings()
//	DESCRIPTION		:	This method is an accessor for the servings data member.
//	PARAMETERS		:	N/A
//	RETURN			:	char* - a pointer to an address containing the servings' value, but not a pointer to the servings' address.
int Recipe::GetServings(void)
{
	return servings;
}


//  METHOD			:	~Recipe()
//	DESCRIPTION		:	This method is a destructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
int Recipe::CreateNew(void)
{
	//	Get name of new recipe from user and create text file with that name
	//	Open (or create if first recipe) RecipeList.txt
		//	Write line to file: <RecipeName>.txt 
	//	Open Recipe file
	//	Loop Ingredient Entry
		//	Get the name of the ingredient from the user
		//	Get the amount of the ingredient from the user
		//	Get the unit of measurement from the user
		//	Write line to file in the format <name>,<amount>,<UOM>
	//	Close Recipe file
}
			

int Recipe::DisplayAll(void)
{
	//	Open RecipeList.txt
	//	Display the recipe names (filter out .txt)
	//	Close RecipeList.txt
}
			

int ReadIngredients(char* recipeName)
{
	// Open <recipeName>.txt
	//	Display the ingredients by replacing the first comma with 2 tabs and deleting the second comma
		//	Example: Flour		125ml
	//	Close <recipe>.txt
}
			

