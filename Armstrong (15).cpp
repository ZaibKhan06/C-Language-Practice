#include <stdio.h>
#include <conio.h>
#include <math.h>

main ()
{
int r,n,y,cube,x;
printf ("\t\t\t\t\t*****Armstrong Number*****\n\n");
printf ("Enter Number\n");
scanf ("%d",&n);
r=n;
do
	{
		y=n%10;
		cube= pow (y,3);
		x=x+cube;
		n=n/10;
	}	
while (n!=0);
	if (x!=r)
		printf ("Number is not Armstrong\n");
	else if (x==r)
		printf ("Number is Armstrong\n");
getch;
}	
