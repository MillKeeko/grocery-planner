//	FILE			:	Recipe.cpp
//	PROJECT			:	Meal Planner
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:


#include "general.h"
#include "Recipe.h"
#include <stdio.h>
#include <string>


using namespace std;


//  METHOD			:	Recipe()
//	DESCRIPTION		:	A constructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
Recipe::Recipe(void)
{
	
}


//  METHOD			:	~Recipe()
//	DESCRIPTION		:	A destructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
Recipe::~Recipe(void)
{

}


//  METHOD			:	GetName()
//	DESCRIPTION		:	An accessor for the name data member.
//						member.
//	PARAMETERS		:	N/A
//	RETURN			:	char* - a pointer to an address containing name's
//						value, but not a pointer to name's address.
char* Recipe::GetName(void)
{
	strcpy(nameCopy, name);
	return nameCopy;
}


//  METHOD			:	GetServings()
//	DESCRIPTION		:	An accessor for the servings data member.
//	PARAMETERS		:	N/A
//	RETURN			:	char* - a pointer to an address containing 
//						the servings' value, but not a pointer to the 
//						servings' address.
int Recipe::GetServings(void)
{
	return servings;
}


//  METHOD			:	SetName()
//	DESCRIPTION		:	Mutator for the name data member.
//	PARAMETERS		:	N/A
//	RETURN			:
int		SetName(void)
{
	return 0;
}


//  METHOD			:	SetServings()
//	DESCRIPTION		:	Mutator for the servings data member.
//	PARAMETERS		:	N/A
//	RETURN			:
int		SetServings(void)
{
	return 0;
}


//
//	***SHOULD THE LOGIC IN THIS METHOD BE IN THE CONSTRUCTOR?***
//
//  METHOD			:	~Recipe()
//	DESCRIPTION		:	This method is a destructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
int Recipe::CreateNew(void)
{
	char filename[PROMPTLENGTH] = { 0 };
	const char* extension = ".txt";
	FILE* newRecipeFile = NULL;

	//	Get name of new recipe from user 
	printf("Please enter the name of your new recipe: ");
	fgets(filename, PROMPTLENGTH, stdin);

	//	Create a text file with that name
	strcat(filename, extension);
	newRecipeFile = fopen(filename, "w");
	if (newRecipeFile == NULL)
	{
		printf("Can't open text file for writing.");
		return -1;
	}

	//	Loop Ingredient Entry
		//	Get the name of the ingredient from the user
		//	Get the amount of the ingredient from the user
		//	Get the unit of measurement from the user
		//	Write line to file in the format <name>,<amount>,<UOM>

	// Close the text file
	if (fclose(newRecipeFile) != 0)
	{
		printf("Can't close text file opened for writing.\n");
		return -1;
	}

	return 0;
}
			

int Recipe::DisplayAll(void)
{
	//	Open RecipeList.txt
	//	Display the recipe names (filter out .txt)
	//	Close RecipeList.txt

	return 0;
}
			

int Recipe::ReadIngredients(char* recipeName)
{
	// Open <recipeName>.txt
	//	Display the ingredients by replacing the first comma with 2 tabs and deleting the second comma
		//	Example: Flour		125ml
	//	Close <recipe>.txt

	return 0;
}
			

