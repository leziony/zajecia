#include <stdio.h>
#include <stdlib.h>
#include "add.c"
#include <math.h>

int main (int argc, char* argv[])
int main ()
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
	}
	return 0;

}
