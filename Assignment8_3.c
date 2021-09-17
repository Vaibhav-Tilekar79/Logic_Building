/*
Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
*/

#include<stdio.h>

int Display(int, int);

int main()
{
	int iRange1 = 0, iRange2 = 0, iRet =0;
	
	printf("Enter first number in range : \n");
	scanf("%d", &iRange1);
	
	printf("Enter second number in range : \n");
	scanf("%d", &iRange2);
	
	iRet = Display(iRange1, iRange2);
	
	printf("Addition in range is : %d",iRet);
	
	return 0;
}

int Display(int iNo1, int iNo2)
{
	int iCnt = 0, iSum;
	
	for(iCnt=iNo1; iCnt <= iNo2; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	return iSum;
}