/*
Write a program which accept number from user and return the count of even
digits.
Input : 2395
Output : 1
Input : 1018
Output : 2
*/


#include<stdio.h>

int CountEven(int);

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	iRet = CountEven(iValue);
	
	printf("Number of Digits which are less than 6 : %d",iRet);
	
	return 0;
}

int CountEven(int iNo)
{
	int iDigit = 0, iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if((iDigit % 2) == 0)
		{
			iCnt++;
		}
		
		iNo = iNo / 10;
	}
	
	return iCnt;
}

