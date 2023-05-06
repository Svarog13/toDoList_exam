#pragma once
#include <ctime>
#include"Header.h"

struct DateTime
{
	int year;
	int month;
	int day;
	int hours;
	int minutes;
	int seconds;
	struct tm time_info;

	void init();

	void setMonth(int month);
	void setYear(int year);
	void setDay(int day);
	void setHours(int hours);
	void setMinutes(int minutes);
	void setSeconds(int seconds);
};

