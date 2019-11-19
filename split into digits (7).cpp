#include <stdio.h>
#include <conio.h>

main ()
{
int n,i=0,y[100];
printf ("Enter Number\n");
scanf ("%d",&n);
	do
	{
		y[i]=n%10;
		n=n/10;
		i++;
	}
	while (n!=0);
int x=i-1;
printf ("\nDigits in this number are following:\n");
for (int j=0;j<i;j++)
{printf ("%d\n",y[x]);
x--;}
getch();
}
