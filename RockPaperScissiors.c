// Greetings, fellow developers and coders! Allow me to present this remarkable piece of code crafted by none other than Sumit Gupta. Get ready to immerse yourself in the excitement of the game and have a great time!...

// Linkedin Account - https://www.linkedin.com/in/sumit-gupta-393647218/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int C_score=0,P_score=0;
char name[10];

void player1()
{
    int choice,var;
    int i=0;
    while(i!=3)
    {
    printf("\tPress->0 For Rock\n");
    printf("\tPress->1 For Paper\n");
    printf("\tPress->2 For Scissor\n");
    printf("\tEnter Your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 0:printf("\tComputer's Turn:\n");
            srand(time(NULL));
            var=rand()%3;
            printf("%d\n",var);
            if(choice==0 && var==2)
             {
                 printf("%s Wins!\n",&name);
                P_score++;
             }
             else if(choice==0 && var==1)
                {
                    printf("Computer Wins!\n");
                    C_score++;
                }
                else if(choice==0 || var==0)
                {
                    printf("It's A Tie!\n");
                    P_score++;
                    C_score++;
                }
             break;
    case 1:printf("\tComputer's Turn:\n");
            srand(time(NULL));
            var=rand()%3;
            printf("%d\n",var);
            if(choice==1 && var==0)
            {
                printf("%s Wins!\n",name);
                P_score++;
            }
            else if(choice==1 && var==2)
            {
                printf("Computer Wins!\n");
                C_score++;
            }
            else if(choice==1 && var==1)
            {
                printf("It's A Tie");
                P_score++;
                C_score++;
            }
             break;
    case 2:printf("\tComputer's Turn:\n");
            srand(time(NULL));
            var=rand()%3;
            printf("%d\n",var);
            if(choice==2 && var==1)
            {
                printf("%s Wins!\n",name);
                P_score++;
            }
            else if(choice==2 && var==0)
            {
                printf("Computer Wins!\n");
                C_score++;
            }
            else if(choice==2 && var==2)
            {
                printf("It's A Tie\n");
                P_score++;
                C_score++;
            }
             break;
    default:printf("\tInvalid Choice Choose Again!\n");
    }
    printf("\tScore Of %s Is:%d\n",name,P_score);
    printf("\tScore Of Computer Is:%d\n",C_score);

    i++;
   }
   if(P_score>C_score)
    {
        printf("\t%s Wins The Match!\n");
    }
    else if(C_score>P_score)
    {
        printf("\tComputer Wins The Game!\n");
    }
    else{
        printf("It's A Tie!\n");
    }
}
void rules()
{
    printf("\tRules Of The Game:-\n\n");
    printf("\t1.Rock Crushes The Scissor's Player Who Choose Rock, One Point Will Be Given To Him\n\n");
    printf("\t2.Paper Cover's The Rock Player Who Choose Paper Against The Rock, One Point Will Be Given To Him\n\n");
    printf("\t3.Scissor's Cuts The Paper Player Who Choose Scissor's, One Point Will Be Given To Him\n\n");
    printf("\tOnly Two Player's Can Play The Game One Will Be The Computer And Second Will Be The User!\n\n");
    printf("\t4.You Will Be Given Three Chances!\n\n");
    printf("\tScores Will Be Displayed At The End Of The Match\n\n");
}
void main()
{
    printf("\t_______________Welcome To The Game: Rock, Paper & Scissor's_______________\n");
    rules();
    printf("\tPlease Enter The Name Of Player 1:");
    scanf(" %s",&name);
    printf("\tPlayer 1 Is %s And Player 2 Is Computer\n",name);
    printf("\tYou Have Three Attempts To Win The Game\n");
    system("cls");
    printf("\t%s Turn:-\n",name);
    player1();
    getch();
}
