#include <stdio.h>
#include <stdlib.h>

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
	}
	return 0;

}
