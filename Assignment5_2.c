/*
Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int);

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet = ChkZero(iValue);
	
	if(bRet == true)
	{
		printf("It contains zero");
	}
	else
	{
		printf("There is no zero");
	}
	
	return 0;
}

bool ChkZero(int iNo)
{
	int iDigit = 0, iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if(iDigit == 0)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	
	if(iCnt != 0)
	{
		return true;
	}
}