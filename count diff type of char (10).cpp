#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{char str[30];
int i,j,a=0,b=0,c=0;
printf ("\t\t\t\t\t*****Different types of characters*****\n\n");
printf("Enter a String\n");
gets(str);
i=strlen(str);
	for(j=0;j<i;j++)
	{
		if((str[j]>='A' && str[j]<='Z') || (str[j]>='a' && str[j]<='z'))
		{
			a++;
		}
		else if(str[j]>='1' && str[j]<='9')
		{		
			b++;
		}
		else
		{
			c++;
		}
	}
printf ("\nRESULT:\n");
printf("Alphabetic Characters = %d\n",a);
printf("Numeric characters = %d\n",b);
printf("Special characters = %d\n",c);
getch();
}
