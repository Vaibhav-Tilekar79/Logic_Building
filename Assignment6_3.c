/*
Write a program which accept number from user and return the count of digits in
between 3 and 7.
Input : 2395
Output : 1
Input : 1018
Output : 0
*/

#include<stdio.h>

int CountRange(int);

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	iRet = CountRange(iValue);
	
	printf("Number of Digits in range of 3 to 7 : %d",iRet);
	
	return 0;
}

int CountRange(int iNo)
{
	int iDigit = 0, iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit > 3 && iDigit < 7)
		{
			iCnt++;
		}
		
		iNo = iNo / 10;
	}
	
	return iCnt;
}

