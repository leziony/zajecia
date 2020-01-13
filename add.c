void adding()
{
int n;
scanf ("%d",&n);
int x[n];
int i=0;
int sum=0;
for (i=0;i<n;i++)
{
	scanf("%d",&x[i]);
	sum=sum+x[i];
}
printf("%d",sum);
}
