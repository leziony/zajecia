#include <stdio.h>
#include <stdlib.h>
#include "add.c"
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
	}
	return 0;

}
