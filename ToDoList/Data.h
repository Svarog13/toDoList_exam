#pragma once
#include"Case.h"
struct Data
{
	int caseId = 1;
	int count = 0;
	Case* list = new Case[count];

	void deleteCase(int id);
	Case* findById(int id);
	void updateCase(Case newCase);
}; 


