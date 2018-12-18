#include "stdafx.h"
#include <stdio.h>
#include <cctype>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int currI = 0;
	int currP = 0;
	int currR = 0;
	int currV = 0;
	char check = '\0';
	printf("Enter Amperage: ");
	while (scanf_s("%d%c", &currI, &check, 1) != 2 || check != '\n' || currI < 0)
	{
		printf("Error! Try Again!\n");
		while (getchar() != '\n');
	}
	printf("Enter Resistance: ");
	while (scanf_s("%d%c", &currR, &check, 1) != 2 || check != '\n' || currR < 0)
	{
		printf("Error! Try Again!\n");
		while (getchar() != '\n');
	}
	float test;
	currV = currI * currR;
	printf("Voltage = %d\n", currV);
	currP = (currV * currI) / (currR * currV);
	currP = currV * currI;
	printf("Power = %d\n", currP);
	system("pause");
	return 0;