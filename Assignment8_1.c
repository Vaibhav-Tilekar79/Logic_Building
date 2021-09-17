/*
Write a program which accept range from user and display all numbers in between
that range.
Input : 23 35
Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
*/


#include<stdio.h>

void Display(int, int);

int main()
{
	int iRange1 = 0, iRange2 = 0;
	
	printf("Enter first number in range : \n");
	scanf("%d", &iRange1);
	
	printf("Enter second number in range : \n");
	scanf("%d", &iRange2);
	
	Display(iRange1, iRange2);
	
	return 0;
}

void Display(int iNo1, int iNo2)
{
	int iCnt = 0;
	
	for(iCnt=iNo1; iCnt <= iNo2; iCnt++)
	{
		printf("%d\t", iCnt);
	}
}