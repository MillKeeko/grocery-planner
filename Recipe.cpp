//	FILE			:	Recipe.cpp
//	PROJECT			:	Grocery List
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:	


#include "general.h"
#include "IO.h"
#include "Recipe.h"


//  METHOD			:	Recipe()
//	DESCRIPTION		:	A constructor.
//	PARAMETERS		:	N/A
//	RETURN			:	N/A
Recipe::Recipe(void)
{
	name = NULL;
	nameCopy = NULL;
	instructions = NULL;
	instructionsCopy = NULL;
	servings = 0;
	ingredients;
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


//  METHOD			:	GetInstructions()
//	DESCRIPTION		:	An accessor for the instructions data member.
//	PARAMETERS		:	N/A
//	RETURN			:	
char* Recipe::GetInstructions(void)
{
	strcpy(instructionsCopy, instructions);
	return instructionsCopy;
}


//  METHOD			:	SetName()
//	DESCRIPTION		:	Mutator for the name data member.
//	PARAMETERS		:	N/A
//	RETURN			:
int	Recipe::SetName(void)
{
	return 0;
}


//  METHOD			:	SetServings()
//	DESCRIPTION		:	Mutator for the servings data member.
//	PARAMETERS		:	N/A
//	RETURN			:
int	Recipe::SetServings(void)
{
	return 0;
}


//  METHOD			:	SetInstructions()
//	DESCRIPTION		:	Mutator for the instructions data member.
//	PARAMETERS		:	N/A
//	RETURN			:
int	Recipe::SetInstructions(void)
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
	//	IO variables
	char filename[PROMPTLENGTH] = { 0 };
	const char* extension = ".txt";
	const char* permission = "w";
	FILE* newRecipeFile = NULL;
	IO io = IO();

	//	Recipe variables

	//	Get name of new recipe from user 
	printf("Please enter the name of your new recipe: ");
	fgets(filename, PROMPTLENGTH, stdin);
	clearCR(filename);

	//	Create a text file with that name
	strcat(filename, extension);
	newRecipeFile = io.OpenFile(filename, permission);

	//	Loop Ingredient Entry
		//	Get the name of the ingredient from the user
		//	Get the amount of the ingredient from the user
		//	Get the unit of measurement from the user
		//	Write line to file in the format <name>,<amount>,<UOM>

	// Close the text file
	io.CloseFile(newRecipeFile);

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
			

