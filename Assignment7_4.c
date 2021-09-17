/*
Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (0.5556)
*/

#include<stdio.h>

double FhtoCs(float);

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	
	printf("Enter temperature in Fahrenhite : \n");
	scanf("%f", &fValue);
	
	dRet = FhtoCs(fValue);
	
	printf("%f",dRet);
	
	return 0;
}

double FhtoCs(float fTemp)
{
	double dConv = 0.0;
	
	dConv = ((fTemp - 32) * 0.5556);

	return dConv;
}

