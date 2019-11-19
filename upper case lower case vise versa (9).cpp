#include <stdio.h>
#include <conio.h>
#include <string.h>
main ()
{int z,a;
char y[100];
printf ("Enter Any string\n");
gets (y);
//scanf ("%[^\n]s",y);
a=strlen (y);
for (int i=0;i<a;i++)
	{
	if (y[i]<='a' && y[i]>='z' || y[i]<='A' && y[i]>='Z')
	{
		printf ("Please enter only alphabets");
		break;
	}
	else if (y[i]>='A' && y[i]<='Z')
	{
		z=y[i]+32;
	}
	else if (y[i]>='a' && y[i]<='z')
	{
		z=y[i]-32;
	}
printf ("%c",z);
	}
getch();
}
