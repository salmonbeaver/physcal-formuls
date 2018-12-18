#include "pch.h"
#include <stdio.h>
#include <cctype>
#include <stdlib.h>
#include <conio.h>

int Checking();


int main()
{
	int currI = 0;
	int currP = 0;
	int currR = 0;
	int currV = 0;
	bool help = false;
	while (!help)
	{
		printf("Enter Amperage: ");
		currI = Checking();
		printf("Enter Resistance: ");
		currR = Checking();
		float test;
		currV = currI * currR;
		printf("Voltage = %d\n", currV);
		currP = (currV * currI) / (currR * currV);
		currP = currV * currI;
		printf("Power = %d\n", currP);
		printf("Repeat? 1 - no , 2 - yes :");
		int rep = Checking();
		if (rep == 1)
		{
			help = true;
		}
	}
	
	return 0;
}

int Checking()
{
	int x = 0;
	char check = '\0';
	while (scanf_s("%d%c", &x, &check, 1) != 2 || check != '\n' || x < 0)
	{
		printf("Error! Try Again!\n");
		while (getchar() != '\n');
	}
	return x;
}