//	FILE			:	Recipe.cpp
//	PROJECT			:	Meal Planner
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:


#include "Recipe.h"


#include <stdio.h>


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

//	CreateNew()
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

//	DisplayAll()
			//	Open RecipeList.txt
			//	Display the recipe names (filter out .txt)
			//	Close RecipeList.txt

//	ReadIngredients(string recipe)
			//	Open <recipe>.txt 
			//	Display the ingredients by replacing the first comma with 2 tabs and deleting the second comma
				//	Example: Flour		125ml
			//	Close <recipe>.txt

