#include <stdio.h>
#include <conio.h>

main ()
{int i=20;
int *j=&i;
printf ("address of i is %u\n",&i);
printf ("address of i is %u\n",j);
printf ("address of j is %u\n",&j);
printf ("address of i is %u\n",j);
printf ("value of i is %d\n",i);
//'*' bwelow represents "Value at the" '&' represents "address"
printf ("value of i is %d\n",*(&i));
printf ("value of i is %d\n",*j);
}
