#include <stdio.h>
#include <conio.h>

main() 
{float e,p,c,m,u,sum,total,percentage;
total=500;
printf ("Enter Eng marks(out of 100)=");
scanf ("%f",&e);
printf ("Enter phy marks(out of 100)=");
scanf ("%f",&p);
printf ("Enter chem marks(out of 100)=");
scanf ("%f",&c);
printf ("Enter math marks(out of 100)=");
scanf ("%f",&m);
printf ("Enter urdu marks(out of 100)=");
scanf ("%f",&u);
sum=e+p+c+m+u;
percentage=(sum/total)*100;
printf ("Congratulations Your percentage is %f",percentage);
getch ();
}
