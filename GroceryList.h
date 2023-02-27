//	FILE			:	GroceryList.h
//	PROJECT			:	Grocery List
//	PROGRAMMER		:	William Anderson
//	PROJECT START	:	2022-11-02
//	FIRST VERSION	:

#pragma once


#include "Ingredient.h"
#include <vector>


class GroceryList
{
private:
	std::vector<Ingredient> items;
public:
	GroceryList(void);
	~GroceryList(void);
};

