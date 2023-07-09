#include<stdio.h>
#include<stdlib.h>
#include "worldcup_player.h"
#include "worldcup_team.h"
struct player{ //create structure of players with attributes of player code, player name, player age, and professional club affiliation
    int code;
    char name[50];
    int age;
    char club[50];
    int team_code;
}player[32];

int check(int code,int playernum) //check if player code entered by user is valid or already exists
{
    int i=0;
    while(i<=playernum)
    {
        if(player[i].code==code)
        {
            printf("Player with code %d already exist\n",code);
            return 0;
        }
        i++;
    }
}
int checkage(int age) //check if player age entered by user is valid
{
    if(age<17||age>99)
    {
        printf("Invalid player age\n");
        return 0;
    }
}

int mainp()
{
    while(1)
    {
        printf("Enter operation code:"); //ask user for operation code
        scanf("%c",&input);

        switch(input)
        {
            case 'i': //insert a new player as long as structure not full
                if(playernum==31)
                {
                    printf("Player input limit reached\n");
                    break;
                }
                printf("Enter player code:");
                scanf("%d",&code);
                if(!check(code,playernum+1))
                break;

                printf("Enter player name:");
                while (getchar() != '\n');
                fgets(player[playernum+1].name,49,stdin);
                while (getchar() != '\n');
            
                printf("Enter player age:");
                scanf("%d",&age);
                if(!checkage(age))
                break;
                while (getchar() != '\n');

                printf("Enter the club name:");
                while (getchar() != '\n');
                fgets(player[playernum+1].name,49,stdin);
                while (getchar() != '\n');
                
                playernum++;
                player[playernum].code=code;
                player[playernum].age=age;
                break;
                
                case 's': //search for an player in the database and print it out
                    i=0;
                    flag=0;
                    printf("Enter player code:");
                    scanf("%d",&code);

                    while(player[i].code!=code)
                    {
                        i++;  
                    }
                    if(player[i].code==code) 
                        flag++;
                    if(flag==0) //if no flag/code cant match. Player is not found
                    {
                        printf("Player with code %d not found\n",code);
                    }
                    printf("Player Code\tPlayer Name\tPlayer Age\tPlayer Club\n");
                    printf("%d\t\t%s\t\t\t\t%d\t\t%c\n",player[i].code,player[i].name,player[i].age,player[i].club);
                    break;
                    
                case 'u': //update a player in the database, ask user for update to all attributes 
                    i=0;
                    flag=0;
                    printf("Enter player code:");
                    scanf("%d",&code);
                    while(player[i].code!=code)
                    {
                        i++;
                    }
                    if(player[i].code==code)
                        flag++;
                    if(flag==0) //if no flag/code cant match. Player is not found
                    {
                        printf("Player with code %d not found\n",code);
                    }
                    printf("Enter player name:");
                    while (getchar() != '\n');
                    fgets(player[playernum+1].name,49,stdin);
                    while (getchar() != '\n');
                    printf("Enter player age:");
                    scanf("%d",&age);
                    if(!checkage(age))
                    break;
                    while (getchar() != '\n');
                    printf("Enter the player club:");
                    while (getchar() != '\n');
                    fgets(player[playernum+1].name,49,stdin);
                    while (getchar() != '\n');
                    player[i].age=age;                  
                    break;
                
                case 'p': //print the entire list of players
                    i=0;
                    printf("Player Code\tPlayer Name\tPlayer Age\tPlayer Club\n");
                    while(i<=playernum)
                    {
                    printf("%d\t\t%s\t\t\t\t%d\t\t%c\n",player[i].code,player[i].name,player[i].age,player[i].club);
                    i++;
                    }
                    break;
                    
                case 'd': //delete player
                    i=0;
                    flag=0;
                    printf("Enter player code:");
                    scanf("%d",&code);
                    while(player[i].code!=code)
                    {
                        i++;
                    }
                    if(player[i].code==code)
                        flag++;
                    if(flag==0) //if no flag/code cant match. Player is not found
                    {
                        printf("Player with code %d not found\n",code);
                    }
                    for(int i = 0; i < sizeof player; i++){
                    if(code == player[i].code){
                    for (i = 0; i <  sizeof player - 1; i++)
                    {
                        player[i] = player[i + 1];
                } 
            }
        }
                } 
        }
        return 0;
    }