#include<stdio.h>
#include<stdlib.h>
#include<p18f4550.h>
void main()
{
int sum;
sum=0;
sum=0X0A+0X05;
TRISD=0;
PORTD=sum;
}
