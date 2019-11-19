#include <stdio.h>
#include <conio.h>

main ()
{int i=0,l;
char str[100],a;
printf ("Enter any string\n");
gets (str);
l=strlen (str)-1;
while (i<l)
	{
	a=str[i];
	str[i]=str[j];
	str[j]=a;
	i++;
	l--;
	}
printf ("\n Reverse of the givin string is %s",str);
getch;
}
