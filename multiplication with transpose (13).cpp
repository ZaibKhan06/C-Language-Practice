#include <stdio.h>
#include<conio.h>

main ()
{
int i,j,k;
int a[2][2],b[2][2],c[2][2],d[2][2];
printf ("Enter elements for first matrix (4 elements)\n");
for (i=0;i<2;i++)
	{for (j=0;j<2;j++)
		{
			scanf ("%d",&a[i][j]);
		}
 	}	 
printf ("Enter element for second matrix (4 elements)\n");
for (i=0;i<2;i++)
	{for (j=0;j<2;j++)
		{
			scanf ("%d",&b[i][j]);
		}
		
 	}
	 	 
printf ("Multiplication of matrix is\n");
for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
			{
			int sum=0;
			for (k=0;k<2;k++)
				{
		 		sum=sum+a[i][k]*b[k][j];
		 		c[i][j]=sum;
				}
			printf ("%d\t",c[i][j]);
			}
		printf("\n");
	}

printf ("Transpose of matrix is\n");
for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			d[i][j]=c[j][i];
			printf ("%d\t",d[i][j]);
		}
	printf("\n");
 	}	 
getch ();
}
