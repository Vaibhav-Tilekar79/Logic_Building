/*
Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
*/

#include<stdio.h>

int MulDigits(int);

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	iRet = MulDigits(iValue);
	
	printf("Digits Multiplication is : %d",iRet);
	
	return 0;
}

int MulDigits(int iNo)
{
	int iDigit = 0, iMul = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit == 0)
		{
			iDigit = 1;
		}
		iMul = iMul * iDigit;
		iNo = iNo / 10;
	}
	
	return iMul;
}

