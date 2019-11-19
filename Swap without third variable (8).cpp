#include <stdio.h>
#include <conio.h>

main ()
{
int a,b;
printf ("Enter two numbers\n");
scanf ("%d%d",&a,&b);
a=a+b-(b=a);
printf ("\nNumbers after swap\n");
printf ("%d\n%d",a,b);
getch();
}
