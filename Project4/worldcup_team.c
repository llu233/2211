#include<stdio.h>
#include<stdlib.h>
#include "worldcup_team.h"
#include "worldcup_player.h"
 
struct team{ //create structure of teams with attributes of team code, team name, seeding, and kit colour
   int code;
   char name[25];
   int seeding;
   char kit;
}team[32];
 
int check(int code,int teamnum) //check if team code entered by user is valid or already exists
{
   int i=0;
   while(i<=teamnum)
   {
       if(team[i].code==code)
       {
           printf("Team with code %d already exist\n",code);
           return 0;
       }
       i++;
   }
}
 
int checkseeding(int seeding) //check if team seeding entered by user is valid
{
   if(seeding>4)
   {
       printf("Invalid group seeding\n");
       return 0;
   }
}
 
int checkkit(char kit) //check if team kit colour is valid
{
   if(kit!='R'&&kit=='O'&&kit=='Y'&&kit=='G'&&kit=='B'&&kit=='I'&&kit=='V')
   {
       printf("Invalid kit colour\n");
       return 0;
   }
}
 
int maint()
{
   while(1)
   {
       printf("Enter operation code:"); //ask user for operation code
       scanf("%c",&input);
 
       switch(input)
       {
           case 'i': //insert a new team as long as structure not full
               if(teamnum==31)
               {
                   printf("Team input limit reached\n");
                   break;
               }
               printf("Enter team code:");
               scanf("%d",&code);
               if(!check(code,teamnum+1))
               break;
          
               printf("Enter team name:");
               while (getchar() != '\n');
               fgets(team[teamnum+1].name,24,stdin);
               while (getchar() != '\n');
              
               printf("Enter group seeding:");
               scanf("%d",&seeding);
               if(!checkseeding(seeding))
               break;
               while (getchar() != '\n');
               printf("Enter the kit colour:");
               scanf("%c",&kit);
               if(!checkkit(kit))
               break;
               while (getchar() != '\n');
              
               teamnum++;
               team[teamnum].code=code;
               team[teamnum].seeding=seeding;
               team[teamnum].kit=kit;
               break;
              
               case 's': //search for an team in the database and print it out
                   i=0;
                   flag=0;
                   printf("Enter team code:");
                   scanf("%d",&code);
 
                   while(team[i].code!=code)
                   {
                       i++; 
                   }
                   if(team[i].code==code)
                       flag++;
                   if(flag==0) //if no flag/code cant match. Team is not found
                   {
                       printf("Team with code %d not found\n",code);
                   }
                   printf("Team Code\tTeam Name\tGroup Seeding\tPrimary Kit Colour\n");
                   printf("%d\t\t%s\t\t\t\t%d\t\t%c\n",team[i].code,team[i].name,team[i].seeding,team[i].kit);
                   break;
                  
               case 'u': //update a team in the database, ask user for update to all attributes
                   i=0;
                   flag=0;
                   printf("Enter team code:");
                   scanf("%d",&code);
                   while(team[i].code!=code)
                   {
                       i++;
                   }
                   if(team[i].code==code)
                       flag++;
                   if(flag==0) //if no flag/code cant match. Team is not found
                   {
                       printf("Team with code %d not found\n",code);
                   }
                   printf("Enter team name:");
                   while (getchar() != '\n');
                   fgets(team[teamnum+1].name,24,stdin);
                   while (getchar() != '\n');
                   printf("Enter group seeding:");
                   scanf("%d",&seeding);
                   if(!checkseeding(seeding))
                   break;
                   while (getchar() != '\n');
                   printf("Enter the kit colour:");
                   scanf("%c",&kit);
                   while (getchar() != '\n');
                   if(!checkkit(kit))
                   break;
                   team[i].seeding=seeding;
                   team[i].kit=kit;                   
                   break;
              
               case 'p': //print the entire list of teams
                   i=0;
                   printf("Team Code\tTeam Name\tGroup Seeding\tPrimary Kit Colour\n");
                   while(i<=teamnum)
                   {
                   printf("%d\t\t%s\t\t\t\t%d\t\t%c\n",team[i].code,team[i].name,team[i].seeding,team[i].kit);
                   i++;
                   }
                   break;
               
               case 'd': //delete team
                   i=0;
                   flag=0;
                   printf("Enter team code:");
                   scanf("%d",&code);
                   while(team[i].code!=code)
                   {
                       i++;
                   }
                   if(team[i].code==code)
                       flag++;
                   if(flag==0) //if no flag/code cant match. Team is not found
                   {
                       printf("Team with code %d not found\n",code);
                   }
                   for(int i = 0; i < sizeof team; i++){
                   if(code == team[i].code){
                   for (i = 0; i <  sizeof team - 1; i++)
                    {
                        team[i] = team[i + 1];
                } 
            }
        }
        
                break;
               }
       }
       return 0;
   }
