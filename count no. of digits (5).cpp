#include <stdio.h>
#include <conio.h>

main ()
{
int n,y[100],i=0;
printf ("Enter Number\n");
scanf ("%d",&n);
int a=n;	
	do
	{
		y[i]=n%10;
		n=n/10;
		i++;
	}
	while (n!=0);
printf ("\nNo of digits in %d is %d",a,i);
getch ();
}
