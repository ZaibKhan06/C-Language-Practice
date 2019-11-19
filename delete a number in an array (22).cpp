#include<stdio.h>
#include<conio.h>
int main()
{
	int terms;
	int loc;
	int i;
	int array[100];
	printf("enter number of terms");
	scanf("%d",&terms);
	printf("enter numbers");
	for(i=0;i<terms;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter the location you want to delete");
	scanf("%d",&loc);
	while(loc<terms)
	{
		array[loc-1]=array[loc];
		loc++;
	}
	terms--;
	for(i=0;i<terms;i++)
	{
		printf("%d\n",array[i]);
	}
}
