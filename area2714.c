#include<stdio.h>
void main()
{
	int minutes,hours,minute;
     minutes = 100;
	hours = minutes/60;
	minute =100%60;
	printf("minutes is %d\n",minutes);
	printf("time in minutes and hours is %dhours and %dminutes",hours,minute);
}
