/*
Write a program which accept accept range from user and display all numbers in
between that range in reverse order.
Input : 23 35
Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
*/

#include<stdio.h>

void RangeDisplayRev(int, int);

int main()
{
	int iRange1 = 0, iRange2 = 0;
	
	printf("Enter first number in range : \n");
	scanf("%d", &iRange1);
	
	printf("Enter second number in range : \n");
	scanf("%d", &iRange2);
	
	RangeDisplayRev(iRange1, iRange2);
	
	return 0;
}

void RangeDisplayRev(int iNo1, int iNo2)
{
	int iCnt = 0;
	
	for(iCnt=iNo2; iCnt >= iNo1; iCnt--)
	{
		printf("%d\t", iCnt);
	}
}