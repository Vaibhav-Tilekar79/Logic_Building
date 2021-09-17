/*
 Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464515
*/

#include<stdio.h>

#define SqMeter 0.0929

double SquareMeter(int);

int main()
{
	int iValue = 0;
	double dRet = 0.0;
	
	printf("Enter area in square feet : \n");
	scanf("%d", &iValue);
	
	dRet = SquareMeter(iValue);
	
	printf("%f", dRet);
	
	return 0;
}

double SquareMeter(int iSquare)
{
	double fAns = 0.0;
	
	fAns = iSquare * SqMeter;
	
	return fAns;
}