void times()
{
int n;
int b=0;
scanf ("%d",&n);
int x[n];
int i=0;
int sum=1;
for (i=0;i<n;i++)
{
	scanf("%d",&x[i]);
	sum=sum*x[i];
	printf("continue? \n 1 to stop. \n");
	scanf ("%d",&b)
	if (b==1) break;
}
printf("%d",sum);
}