#include <stdio.h>
#include <conio.h>
main ()
{printf ("\t\t\t\t***VOLUME OF SPHERE***\n\n");
float r,V,Pi;
printf ("Enter radius ");
scanf ("%f",&r);
Pi=3.142;
V=Pi*r*r*r*4/3;
if (r>0)
{printf ("Volume of sphere is %f",V);
}
else
{printf ("Invalid Radius Entered");
}
getch ();
}
