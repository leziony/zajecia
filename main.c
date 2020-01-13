#include <stdio.h>
#include <stdlib.h>
#include "add.c"
#include <math.h>
#include "xdiv.c"
int main (int argc, char* argv[])
{
	int i=0;
	printf("%d means it's good!",i);
	scanf("%d",&i);
	switch (i)
	{
		case 1: i++;
		printf("%d",i);
		break;
		case 2:i--;
		printf("%d",i);
		break;
		case 3:
		adding();
		break;
		case 4:
		subtraction();
		break;
		case 5:
		times();
		break;
		case 6:
		divi();
		break;
	}
	return 0;

}
