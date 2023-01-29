//	FILE			:	main.cpp
//	PROJECT			:	Meal Planner
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:
//	DESCRIPTION		:	This program presents a main menu to the user with the following options: Create New Recipe, Read Recipe, and Create Meal Plan. 
//						When creating a new recipe the user is asked to input the recipe name, and to list ingredients by entering: an
//						ingredient name, ingredient unit of measurement, ingredient measurement value, and number of dinners (2 servings each). 
//						This information is stored in .txt logs that are comma-separated in the order listed above. Read Recipe simply lists recipe 
//						information and returns to the main menu. Create 5-day Meal Plan randomly generates meals totalling 10 servings. The user
//						is asked if they like that meal plan or if they want another to be generated. After the user accepts a meal-plan, the 
//						program adds all of the ingredients together, and goes through the list asking the user if they currently have that 
//						ingredient. If they don't it is added to the grocery list. Once the list is done it is displayed to the user, and the program
//						returns to the main menu. Ingredients are classified as staples and specific. Grocery lists will assume you have staples and
//						only include specific ingredients


#include "general.h"
#include "Recipe.h"
#include "MealPlan.h"


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	bool returnToMenu = true;
	bool invalidInput = false;

	while (returnToMenu)
	{
		system("cls");

		if (invalidInput == true)
		{
			invalidInput = false;
			printf("Please enter a menu choice from 1 to 6.\n");
			printf("\n");
		}

		//	Main Menu
		printf("Please enter one of the following options:\n");
		printf("\t1 - Create New Recipe\n");
		printf("\t2 - Browse Recipes\n");
		printf("\t3 - Enter a Meal Plan\n");
		printf("\t4 - Generate Meal Plan\n");
		printf("\t5 - Generate Grocery List\n");
		printf("\t6 - Exit Program\n");
		printf("\n");
		printf("Choice: ");

		switch (getNum())
		{
			case 1:
				//	Create recipe by entering an ingredient list
				Recipe* recipe = new Recipe();
				recipe->CreateNew();
				break;

			case 2:
				//	Browse recipes and dig into their ingredient lists
				break;

			case 3:
				//	Enter meal plan with existing recipes
				break;

			case 4:
				//	Generate random meal plan with existing recipes
				break;

			case 5:
				//	Generate grocery list for meal plan by removing ingredients the user already has
				break;

			case 6:
				returnToMenu = false;
				break;

			default:
				invalidInput = true;
				break;
		}
	}

	return SUCCESS;
}







