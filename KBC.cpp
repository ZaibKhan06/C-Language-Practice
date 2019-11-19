#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int outcome=0,reply,choice,x=3,i=1;
	printf("\n\n\t\t\t*************************\n\t\t\t\tWELCOME TO\n\t\t\t  Kaun Banega Crorepati  \n\t\t\t*************************\n\n");
	printf("\t\t\tCODED BY: JAHANZAIB KHAN\n\t\t\t*************************\n\n");
	printf("Give the correct answers to win the price money of Rs. 1000 on each question. \nIn your dreams :')\n *keeping in mind that on each wrong answer you will face a loss of Rs. 500*\n\n\nPress Any key to continue\n\n");
    getch();
    while(1)
    {
    printf("Enter your choice and press enter:\n*********************************\n\n1.Play Game\n2.Exit game\n3.Help\n\n");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
	printf("\n***LET THE GAME BEGINS***\n\n");
	printf("\nQ1.Whats does ' =o) ' means ?\n");
	printf("\n1.LOL\t2.Bored\t3.Random\t4.Happy\n\n");
	scanf("%d",&reply);
	if(reply==4)
	{
		printf("\n %c Right Answer %c \n",x,x);
	    printf("\n %c %c %c\n",i,i,i);
		outcome=outcome+1000;
		printf("\nYou have won Rs.%d\n",outcome);
	printf("\n\n**********************************************************************\n\n");
	}
	else 
	{
        printf("\nWrong Answer\n");
        outcome=outcome-500;
		printf("\nRs. 500 has been deducted from your account. \nNew balance in your account is Rs.%d\n",outcome);
   		printf("\n\n**********************************************************************\n\n");
	}
    
    printf("\nQ2.What is a Blue Whale heart the same size as?\n");
	printf("\n1.T-Shirt\t2.Human Brain\t3.Statue of Liberty\t4.Golf Cart\n\n");
	scanf("%d",&reply);
	if(reply==4)
	{
		printf("\n %c Right Answer %c \n",x,x);
	    printf("\n %c %c %c\n",i,i,i);
		outcome=outcome+1000;
		printf("\nYou have won Rs.1000.\nNew balance in your account is Rs.%d\n",outcome);
		printf("\n\n**********************************************************************\n\n");	
	}
	else 
	{
        printf("\nWrong Answer\n");
        outcome=outcome-500;
		printf("\nRs. 500 has been deducted from your account. \nNew balance in your account is Rs.%d\n",outcome);
		printf("\n\n**********************************************************************\n\n");   
    }
    
    
    printf("\nQ3.A man lives on a farm with six chickens, four horses, three cows and his wife. How many feet are on the farm?\n");
	printf("\n1.4\t2.14\t3.28\t4.44\n\n");
	scanf("%d",&reply);
	if(reply==1)
	{
		printf("\n %c Right Answer %c \nFour feet because chickens have claws and cows and horses have hooves\n",x,x);
	        printf("\n %c %c %c\n",i,i,i);
		outcome=outcome+1000;
		printf("\nYou have won Rs. 1000.\nNew balance in your account is Rs.%d\n",outcome);
		printf("\n\n**********************************************************************\n\n");
	}
	else 
	{
        printf("\nWrong Answer\n\nFour feet because chickens have claws and cows and horses have hooves\n");
        outcome=outcome-500;
		printf("\nRs. 500 has been deducted from your account. \nNew balance in your account is Rs.%d\n",outcome);
   		printf("\n\n**********************************************************************\n\n");
    }
    
    printf("\nQ4.What travels around the world but stays in one spot?\n");
	printf("\n1.A letter\t2.The Sun\t3.A stamp\t4.None of the above\n\n");
	scanf("%d",&reply);
	if(reply==3)
	{
		printf("\n %c Right Answer %c \n",x,x);
	        printf("\n %c %c %c\n",i,i,i);
		outcome=outcome+1000;
		printf("\nYou have won Rs. 1000.\nNew balance in your account is Rs.%d\n",outcome);
		printf("\n\n**********************************************************************\n\n");
	}
	else 
	{
        printf("\nWrong Answer\n");
        outcome=outcome-500;
		printf("\nRs. 500 has been deducted from your account. \nNew balance in your account is Rs.%d\n",outcome);
    	printf("\n\n**********************************************************************\n\n");
	}
    
    printf("\nQ5.What can run but never walks, has a mouth but never talks, has a head but never weeps, and has a bed but never sleeps?\n");
	printf("\n1.Tiger\t2.A River\t3.A small car \t4.None of the above \n\n");
	scanf("%d",&reply);
	if(reply==2)
	{
		printf("\n %c Right Answer %c \n",x,x);			
	        printf("\n %c %c %c\n",i,i,i);
		outcome=outcome+1000;
		printf("\nYou have won Rs. 1000.\nNew balance in your account is Rs.%d\n",outcome);
		printf("\n\n**********************************************************************\n\n");
	}
	else 
	{
        printf("\nWrong Answer\n");
        outcome=outcome-500;
		printf("\nRs. 500 has been deducted from your account. \nNew balance in your account is Rs.%d\n",outcome);
    	printf("\n\n**********************************************************************\n\n");
	}
 
	printf("\nQ6.How can a man go eight days without sleep?\n");
	printf("\n1.Energy drinks\t2.coffee\t3.Constant physical exercise\t4.Answer not listed\n\n");
	scanf("%d",&reply);
	if(reply==4)
	{
		printf("\n %c Right Answer %c \n",x,x);
        printf("\n %c %c %c\n",i,i,i);
		outcome=outcome+1000;
		printf("\nYou have won Rs. 1000.\nNew balance in your account is Rs.%d\n",outcome);
		printf("\n\n**********************************************************************\n\n");
	}
	else 
	{
        printf("\nWrong Answer\n");
        outcome=outcome-500;
		printf("\nRs. 500 has been deducted from your account. \nNew balance in your account is Rs.%d\n",outcome);
    	printf("\n\n**********************************************************************\n\n");
	}
 
 	printf("\n\n\nThank you for playing\nHope you Enjoy. %c%c \nYour final credit is Rs. %d",x,x,outcome);
	break;
	    case 2:
	exit(0);
	    case 3:
		printf("\Naww Sorry\nHelp ki to mujh se koi umeed rakhna he mat, wesy he itna bachon wala game hai.\n");
	    break;
	    default:
	    	printf("\nNahi khelna tha to pehly he exit kr dety na:3\n");
} 
printf("\nPress any key to restart or end the game.\n\n");
getch();
}	    	
}
