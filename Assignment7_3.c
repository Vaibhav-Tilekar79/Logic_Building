/*
Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input : 5
Output : 5000
*/

#include<stdio.h>

#define KM 1000

int KMtoMeter(int);

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter distance in meter : \n");
	scanf("%d",&iValue);
	
	iRet = KMtoMeter(iValue);
	
	printf("%d",iRet);
	
	return 0;
}

int KMtoMeter(int iMeter)
{
	int iConversion = 0;
	
	iConversion = iMeter * KM;
	
	return iConversion;
}