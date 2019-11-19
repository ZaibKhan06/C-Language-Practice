#include<stdio.h>
#include<conio.h>
 
main()
{
int r,i,j,n,x;
printf("Enter range of array");
scanf("%d",&r);
int y[r];
for(i=0;i<r;i++)
	{		
		printf("ENTER NUMBER:  ");
		scanf("%d",&y[i]);
	}
for(i=0;i<r;i++)
{
	for(j=i+1;j<r;j++)
    {
        if (y[i]<y[j])
        {
			x=y[i];
        	y[i]=y[j];
        	y[j]=x;
        }
 
    }
}
printf("\n%d",y[0]);
getch();
}

