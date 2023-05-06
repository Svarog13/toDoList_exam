#pragma once
#include<string>
#include "DateTime.h"
struct Case
{
	int id;
	std::string name;
	int priority;
	std::string description;
	DateTime dateTime;
};

