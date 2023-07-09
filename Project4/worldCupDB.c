/*
Program Name: worldCupDB program
Program Purpose: Creates an array of structures to represent up to 32 world cup teams with information such as team code,team name,group seeding, and primary kit colour given by user
Author: Laurence Lu 
*/
#include<stdio.h>
#include<stdlib.h>
#include "worldcup_player.h"
#include "worldcup_team.h"
#include "worldCupDB.h"
    
int main()
{
    printf("h: Help\n");
    printf("q: Quit\n");
    printf("t: Teams\n");
    printf("p: Players\n");
    printf("Enter command:"); //ask user for command
    scanf("%c",&input);
    switch(input)
    {
        case 'h': //print a simple message or messages describing how to use the program.
            printf("Enter q: to quit the program\n");
            printf("Enter t: to enter and access team code, team name, group seeding, and primary kit data\n");
            printf("Enter p: to enter and access player code, player name, player age, player club data\n");
        case 'q': //quit the program
            exit(0); 
        case 't': //access databse of teams
            maint();  
        case 'p': //access databse of players
            mainp();
    } 
}

