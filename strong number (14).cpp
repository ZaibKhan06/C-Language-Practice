#include <stdio.h>
#include <conio.h>

main ()
{
int r,n,y,x=0,f=1;
printf ("\t\t\t\t\t*****Strong Number*****\n\n");
printf ("Enter Number\n");
scanf ("%d",&n);
r=n;
do
	{
		y=n%10;
		for (int i=1;i<=y;i++)
		{
			f=f*i;
		}
		x=x+f;	
		n=n/10;
		f=1;
	}
while (n!=0);
	if (x!=r)
		printf ("Number is not strong\n");
	else if (x==r)
		printf ("Number is Strong\n");
getch;
}
