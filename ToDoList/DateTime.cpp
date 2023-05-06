#include "DateTime.h"

void DateTime::init()
{
	time_t my_time = time(NULL);
	localtime_s(&time_info, &my_time);
}

void DateTime::setMonth(int month)
{
	if(month < 1)
	{
		this->month = time_info.tm_mon + 1;
	}
	else if(month > 12)
	{
		this->month = time_info.tm_mon + 1;
	}
	else
	{
		this->month = month;
	}
}

void DateTime::setYear(int year)
{
	if (year < 2000)
	{
		this->year = time_info.tm_year + 1900;
	}
	else if (year > 2500)
	{
		this->year = time_info.tm_year + 1900;
	}
	else
	{
		this->year = year;
	}
}

void DateTime::setDay(int day)
{
	if (day < 1)
	{
		this->day = time_info.tm_mday;
	}
	else if (month > daysInMoth[month - 1])
	{
		this->month = time_info.tm_mday;
	}
	else
	{
		this->day = day;
	}
}

void DateTime::setHours(int hours)
{
	if (hours < 0)
	{
		this->hours = time_info.tm_hour;
	}
	else if (hours > 23)
	{
		this->hours = time_info.tm_hour;
	}
	else
	{
		this->hours = hours;
	}
}

void DateTime::setMinutes(int minutes)
{
	if (minutes < 0)
	{
		this->minutes = time_info.tm_min;
	}
	else if (minutes > 59)
	{
		this->minutes = time_info.tm_min;
	}
	else
	{
		this->minutes = minutes;
	}

}

void DateTime::setSeconds(int seconds)
{
	if (seconds < 0)
	{
		this->seconds = time_info.tm_sec;
	}
	else if (seconds > 59)
	{
		this->seconds = time_info.tm_sec;
	}
	else
	{
		this->seconds = seconds;
	}
}
