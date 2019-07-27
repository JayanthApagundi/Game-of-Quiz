/*This is a Program written in C named as "GAME OF QUIZ" with file handling in C in which record of the scores and the one who plays the quiz will be stored in the file */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
void SetColor(int ForgC);
int main()
{
    int ch,opt1,opt2,opt3,opt4,opt5,opt6,opt7,opt8,opt9,opt10,count=0;
    char name[20];
    FILE *fptr;
    fptr=fopen("E:/My Programs/Game of Quiz/record.txt","a+");
    if(fptr==NULL)
    {
        printf("error\n");
        exit(1);
    }
    SetColor(7);
    printf("=================WELCOME TO THE GAME OF QUIZ==================\n");
    printf("\nEnter your Name\n");
    scanf("%s",name);
    fprintf(fptr,"%s\n",name);
    SetColor(98);
    printf("%s ,Lets get on with the Quiz\n",name);
    while(1)
    {
       SetColor(7);
       printf("1.Start the Quiz\n2.Rules and Regulations\n3.Quit  (Its better to read rules and regulations)\n");
       printf("Enter your choice\n");
       scanf("%d",&ch);
    switch(ch)
    {
        case 1: SetColor(98);
                printf("======================================================================\n");
                printf("1)For which of the following disciplines is Nobel Prize awarded?\n1)Physics and Chemistry\t2)Physiology or Medicine\t3)Literature, Peace and Economics\t4)All of the above\n");
                scanf("%d",&opt1);
                if(opt1==4)
                    count++;
                else
                {
                    SetColor(4);
                    printf("Sorry, The correct is 4)All of the above\n");
                }
                printf(" Current Score: %d\n",count);
                printf("======================================================================\n");

                SetColor(98);
                printf("2)The headquarter of the Indian Mountaineering Foundation is at\n1)Kolkata\t2)Darjeeling\t3)New Delhi\t4)Warsaw\n");
                scanf("%d",&opt2);
                if(opt2==3)
                    count++;
                else
                {
                  SetColor(4);
                  printf("sorry, The correct answer is 3)New Delhi\n");
                }
                printf(" Current Score: %d\n",count);
                printf("======================================================================\n");

                SetColor(98);
                printf("3)Which supercomputer is developed by the Indian Scientists?\n1)Param\t2)Super 301\t3)Compaq Presario\t4)CRAY YMP\n");
                scanf("%d",&opt3);
                if(opt3==1)
                    count++;
                else
                {
                    SetColor(4);
                    printf("sorry, The correct answer is 1)Param \n");
                }
                printf(" Current Score: %d\n",count);
                printf("======================================================================\n");

                SetColor(98);
                printf("4)One Gigabyte is approximately equal is:\n1)1000,000 bytes\t2)1000,000,000 bytes\t3)1000,000,000,000 bytes\t4)None of these\n");
                scanf("%d",&opt4);
                if(opt4==2)
                    count++;
                else
                {
                    SetColor(4);
                    printf("sorry, The correct answer is 2)1000,000,000 bytes\n");
                }
                printf(" Current Score: %d\n",count);
                printf("======================================================================\n");

                SetColor(98);
                printf("5)Which country’s football team has lifted the 2018 Intercontinental Cup football title?\n1)India\t2)SriLanka\t3)Kenya\t4)Argentina\n");
                scanf("%d",&opt5);
                if(opt5==1)
                    count++;
                else
                {
                    SetColor(4);
                    printf("sorry, The correct answer is 1)India\n");
                }

                printf(" Current Score: %d\n",count);
                printf("======================================================================\n");

                SetColor(98);
                printf("6)Panchantra was written by\n1)Kaladisa\t2)vishnu Sharma\t3)Tulsi das\t4)Banabhatta\n");
                scanf("%d",&opt6);
                if(opt6==2)
                    count++;
                else
                {
                    SetColor(4);
                    printf("sorry, The correct answer is 2)Vishnu sharma\n");
                }
                printf(" Current Score: %d\n",count);
                printf("======================================================================\n");

                SetColor(98);
                printf("7)Which one is the first search engine in internet?\n1)Google\t2)Archie\t3)Altavista\t4)WAIS\n");
                scanf("%d",&opt7);
                if(opt7==2)
                    count++;
                else
                {
                    SetColor(4);
                    printf("sorry, The correct answer is 2)Archie\n");
                }
                printf(" Current Score: %d\n",count);
                printf("======================================================================\n");

                SetColor(98);
                printf("8)First computer virus is known as\n1)Rabbit\t2)Elk cloner\t3)Creeper virus\t4)SCA virus\n");
                scanf("%d",&opt8);
                if(opt8==3)
                    count++;
                else
                {
                    SetColor(4);
                    printf("sorry, The correct answer is 3)Creeper virus\n");
                }

                printf(" Current Score: %d\n",count);
                printf("======================================================================\n");

                SetColor(98);
                printf("9)Whose the world's richest man\n1)Bill gates\t2)Warret Buffey\t3)Jeff Bezos\t4)Mukesh Ambani\n");
                scanf("%d",&opt9);
                if(opt9==3)
                    count++;
                else
                {
                    SetColor(4);
                    printf("sorry, The correct answer is 3)Jeff Bezos\n");
                }
                printf(" Current Score: %d\n",count);
                printf("======================================================================\n");

                SetColor(98);
                printf("10) Country that was called as Land of Rising Sun?\n1)Russia\t2)Holland\t3)Korea\t4)Japan\n");
                scanf("%d",&opt10);
                if(opt10==4)
                    count++;
                else
                {
                    SetColor(4);
                    printf("sorry, The correct answer is 4)Japan\n");
                }
                printf(" Current Score: %d\n",count);
                printf("======================================================================\n");

                printf("Your Final Score:%d\n",count);
                fprintf(fptr,"Quiz Score:%d\n",count);
                printf("======================================================================\n");
                if(count>5)
                    printf("%s, Congrats!!! You won the quiz\n",name);
                else
                    printf("%s, You lost the quiz, Better luck next time\n",name);
                printf("=======================================================================\n");
                printf("Thank you for taking up the quiz\n");
                exit(0);
                break;

         case 2:SetColor(13);
                printf("=========================================================================\n");
                printf("Rules and Regulation\n");
                printf("1.The quiz contains 10 questions\n2.Each question will have 4 options in which one of them is correct answer\n3.Enter the No. of option for submitting the answer\n4.If you answer more than 5 questions correctly you are winner else loser\n5.Now you are ready to take up the quiz\n");
                printf("=========================================================================\n");
                break;

         case 3:exit(0);

         default:printf("Invalid Choice!!!\n");
        }
    }
    fclose(fptr);
    return 0;
}
void SetColor(int ForgC)
{
     WORD wColor;//We will need this handle to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;//We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {//Mask out all but the background attribute, and add in the forgournd color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
