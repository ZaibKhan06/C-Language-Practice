#include <stdio.h>
#include <conio.h>

main ()
{
int a=0,b=1,c,n,i;
printf("Enter Number of terms\n");
scanf("%d",&n);
for (i=0;i<n;i++)
{	if (i<=1)
	{
		c=i;
	}
	else
	{
		c=a+b;
		a=b;
		b=c;
	}
	printf ("%d \t",c);
}
getch ();
}
