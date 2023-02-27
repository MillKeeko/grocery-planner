//	FILE			:	User.h
//	PROJECT			:	Grocery List
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:	

#pragma once

#include <stdio.h>
#include <string>
#include "Recipe.h"

class User
{
private:
	//	Main data members
	char* name;
	std::vector<Recipe> meals;

	//	Auxilliary data members
	char* nameCopy;

public:
	User(void);
	~User(void);

	char* GetName(void);
	
};

