#include "Data.h"

void Data::deleteCase(int id)
{
	Case* result = findById(id);
	if (result != nullptr)
	{
		Case* array = new Case[count - 1];
		for (int i = 0, j = 0; i < count; i++, j++)
		{
			if (list[i].id == id)
			{
				i++;
			}
			array[j] = list[i];
		}
		delete[] list;
		list = array;
		count--;
	}
}
Case* Data::findById(int id)
{
	for (int i = 0; i < count; i++)
	{
		if (list[i].id == id)
		{
			return &list[i];
		}
	}
	return nullptr;
}
void Data::updateCase(Case newCase)
{
	Case* result = findById(newCase.id);
	if (result != nullptr)
	{
		*result = newCase;
	}
}