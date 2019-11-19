#include <stdio.h>
#include <conio.h>

main ()
{
int r,n,y,sum=0;
printf ("\t\t\t\t\t*****Perfect Number*****\n\n");
printf ("Enter Number\n");
scanf ("%d",&n);
r=n;
for (int i=1;i<n;i++)
	{
		y=r%i;
		if (y==0)
		{
			sum=sum+i;
		}
	}
if (sum==n)
printf ("Number is perfect\n");
else
printf ("Number is not a perfect ");
getch();
}
