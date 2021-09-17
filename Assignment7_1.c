/*
Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
*/

#include<stdio.h>

#define PI 3.14

double CircleArea(float);

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter the radius : ");
	scanf("%f", &fValue);
	
	dRet = CircleArea(fValue);
	
	printf("Area of circle is : %f",dRet);

	return 0;
}

double CircleArea(float fRadius)
{
	double dArea = 0.0;
	
	dArea = PI * fRadius * fRadius;
	
	return dArea;
}