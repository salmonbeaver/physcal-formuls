#include "pch.h"
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
	printf("Enter Amperage: ");
	scanf_s("%d", &currI);
	printf("Enter Resistance");
	scanf_s("%d", &currR);
	currV = currI * currR;
	printf("Voltage = %d\n", currV);
	currP = currV * currI;
	printf("Power = %d\n", currP);
	system("pause");
	return 0;
}