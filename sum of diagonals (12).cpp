#include <stdio.h>
#include<conio.h>

main ()
{
int a[2][2];
int i,j,sum=0;
printf ("Enter element for matrix\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf ("%d",&a[i][j]);
		}
 	}
for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			if (i==j)
			{
			sum=sum+a[i][j];
			}
		}
 	} 
printf ("sum of diagonals is %d",sum);
getch ();
}
