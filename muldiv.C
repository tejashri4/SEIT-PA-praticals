#include<stdio.h>
#include<stdlib.h>
#include<p18f4550.h>
void main()
{
int MUL,DIV;
MUL=0;
DIV=0;
MUL=0x04*0x02;
DIV=0x06/0x02;
TRISD=0;
TRISC=0;
PORTD=MUL;
PORTC=DIV;
}
