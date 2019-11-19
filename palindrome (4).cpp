#include <stdio.h>
#include <conio.h>

main ()
{
int n,r=0,x=0,i=0,y[100];
printf ("Enter Number\n");
scanf ("%d",&n);
int a=n;
	do
	{	
		y[i]=n%10;
		n=n/10;
		r=r*10+y[i];
		i++;
	}
	while (n!=0);
printf ("Reverse of a number is\n%d",r);
	if (a==r)
		printf ("\n\n***%d is palindrome***",a);
	else
		printf ("\n\n***%d is not palindrome***",a);
getch ();
}

