/*
Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
*/


#include<stdio.h>

int CountDiff(int);

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	iRet = CountDiff(iValue);
	
	printf("Difference is : %d",iRet);
	
	return 0;
}

int CountDiff(int iNo)
{
	int iDigit = 0, iEsum = 0, iOsum =0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if((iDigit % 2) == 0)
		{
			iEsum = iEsum + iDigit;
		}
		else
		{
			iOsum = iOsum + iDigit;
		}
		
		iNo = iNo / 10;
	}
	
	return (iEsum - iOsum);
}