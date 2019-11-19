#include <stdio.h>
#include <conio.h>

main ()
{
int n,i;
printf ("Enter a 5 digit Number\n");
scanf ("%d",&n);
printf ("\nReverse of Number is\n");	
	do
	{	
		i=n%10;
		printf("%d",i);
		n=n/10;
	}
	while (n!=0);
getch ();
}
