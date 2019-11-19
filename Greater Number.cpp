#include <stdio.h>
#include <conio.h>

main()
{
int num1,num2,num3;
printf ("/t/t/t/t****NUMBER Comparision****\n\n");
printf("Enter num1 \nEnter num2 \nEnter num3\n");
scanf("%d %d %d",&num1,&num2,&num3);
if(num1>num2 && num1>num3)
{printf("%d is greater",num1);
}
else if(num2>num1 && num2>num3)
{printf("%d is greater",num2);
}
else
{printf("%d is greater",num3);
}
getch ();
}
