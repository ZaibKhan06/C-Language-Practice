#include <stdio.h>
#include <conio.h>

main ()
{
	
int n,y[100],i=0;
printf ("Enter Number\n");
scanf ("%d",&n);
	do
	{
		y[i]=n%10;
		n=n/10;
		printf ("%d",y[i]);
		i++;
	}
	while (n!=0);
	if (y[i]=9)
		{
		printf ("9 is the largest digit");
		}
	else if (y[i]=8)
		{
		printf ("8 is the largest digit");
		}
	else if (y[i]=7)
		{
		printf ("7 is the largest digit");
		}
	else if (y[i]=6)
		{
		printf ("6 is the largest digit");
		}
	else if (y[i]=5)
		{
		printf ("5 is the largest digit");
		}
	else if (y[i]=4)
		{
		printf ("4 is the largest digit");
		}
	else if (y[i]=3)
		{
		printf ("3 is the largest digit");
		}
	else if (y[i]=2)
		{
		printf ("2 is the largest digit");
		}
	else if (y[i]=1)
		{
		printf ("1 is the largest digit");
		}
	else if (y[i]=0)
		{
		printf ("0 is the largest digit");
		}
getch();
}
