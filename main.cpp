//	FILE			:	main.cpp
//	PROJECT			:	Meal Planning and Grocery List
//	PROGRAMMER		:	William Anderson - 8660310
//	FIRST VERSION	:	2022-11-02
//	DESCRIPTION		:	This program presents a main menu to the user with the following options: Create New Recipe, Read Recipe, and Create 5-day 
//						Meal Plan. When creating a new recipe the user is asked to input the recipe name, and to list ingredients by entering: an
//						ingredient name, ingredient unit of measurement, ingredient measurement value, and number of dinners (2 servings each). 
//						This information is stored in .txt logs that are comma-separated in the order listed above. Read Recipe simply lists recipe 
//						information and returns to the main menu. Create 5-day Meal Plan randomly generates meals totalling 10 servings. The user
//						is asked if they like that meal plan or if they want another to be generated. After the user accepts a meal-plan, the 
//						program adds all of the ingredients together, and goes through the list asking the user if they currently have that 
//						ingredient. If they don't it is added to the grocery list. Once the list is done it is displayed to the user, and the program
//						returns to the main menu.


#include <stdio.h>


#define SUCCESS				0
#define FAILUTE				-1
#define USERINPUTLENGTH		121


#pragma warning(disable: 4996)


int getNum(void);


int main(void)
{
	//	Main Menu
	printf("Please enter one of the following options:\n");
	printf("1 - Create New Recipe\n");
	printf("2 - Read a Recipe\n");
	printf("3 - Enter a Meal Plan\n");
	printf("4 - Generate Meal Plan\n");
	printf("5 - Generate Grocery List\n");
	printf("6 - Exit Program\n");

	printf("DEBUG - %d", getNum());

	return SUCCESS;
}


//	FUNCTION		:	getNum()
//	DESCRIPTION		:	This function retreives the number entered by the user. If the user does not enter a positive integer, it returns -1. Otherwise, 
//						it returns the number. ***This function is taken from Carlo Scro's SENG 1000 course at Conestoga College***
//	PARAMETERS		:	N/A
//	RETURN			:	If the user enters a positive integer, return that integer. Otherwise return -1.
int getNum(void)
{
	char record[USERINPUTLENGTH] = { 0 };
	int number = 0;

	fgets(record, USERINPUTLENGTH, stdin);

	if (sscanf(record, "%d", &number) != 1)
	{
		number = -1;
	}

	return number;
}