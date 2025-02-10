#include<stdio.h>
#include<stdlib.h>
#include<PIC18F4550.h>
void main()
{
int sum;
sum=0;
sum=0X05+0X02;
TRISD=0;
PORTD=sum;
}
