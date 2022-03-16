#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int a = year % 100 == 0;
	int b = year % 4 == 0;
	int c = year % 400 == 0;
	int feb = month == 2 && day > 60;
	int apr = month == 4 && day > 120;
	int jun = month == 6 && day > 181;
	int sep = month == 8 && day > 273;
	int nov = month == 11 && day > 334;
	int d = day;
	int m = month;

	if (feb || apr || jun || sep || nov)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, dayofmonth(d, m), year);
	}
	else if ((!a && b) || (a && c))
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day >= 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

/**
 * dayofmonth - given an a day and a month, returns that dayofmonth
 * @day: the day
 * @month: the month
 * Return: the dayofmonth on success, 0 otherwise.
 */
int dayofmonth(int day, int month)
{
	if (month == 2)
		return (day - 31);
	else if (month == 4)
		return (day - 90);
	else if (month == 6)
		return (day - 151);
	else if (month == 9)
		return (day - 243);
	else if (month == 11)
		return (day - 304);
	return (0);
}
