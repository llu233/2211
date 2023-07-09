/*
Program Name: intToEnglish Program
Program Purpose: Converts any integer from 1-999 into the English word (in lower case)
Author: Laurence Lu
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number; //user input number variable
    int ones,tens,hundreds;
    while(1) //loop program
    {
        printf("Please enter a value (1-999, 0 to quit): ");
        scanf("%d", &number); //recieve input number

        if (number == 0) break; //if user inputs 0, the program ends

        hundreds = number/100; //calculates hundreds place
        tens = ((number-(hundreds*100))/10); //calculates tens place
        ones = (number-(hundreds*100)-(tens*10)); //calculates ones place
        printf("You entered the number ");

        if (hundreds>0) //prints hundreds in words
        {
            if (hundreds == 1)      printf("one");
            else if (hundreds == 2) printf("two");
            else if (hundreds == 3) printf("three");
            else if (hundreds == 4) printf("four");
            else if (hundreds == 5) printf("five");
            else if (hundreds == 6) printf("six");
            else if (hundreds == 7) printf("seven");
            else if (hundreds == 8) printf("eight");
            else                    printf("nine");
            printf(" hundred ");
        }
        if (tens != 1)
        {
            if (hundreds>0 && tens != 1 && ones > 0) //if there is hundreds place, add "and" between hundreds and tens
            printf("and ");
            if (tens == 2)      printf("twenty");
            else if (tens == 3) printf("thirty");
            else if (tens == 4) printf("forty");
            else if (tens == 5) printf("fifty");
            else if (tens == 6) printf("sixty");
            else if (tens == 7) printf("seventy");
            else if (tens == 8) printf("eighty");
            else if (tens == 9) printf("ninety");

            if (hundreds>=0 && tens != 1 && ones > 0) //adds "-" between tens and ones when there is hundreds
            printf("-");
            if (ones > 0)
            {
                if (ones == 1)      printf("one\n");
                else if (ones == 2) printf("two\n");
                else if (ones == 3) printf("three\n");
                else if (ones == 4) printf("four\n");
                else if (ones == 5) printf("five\n");
                else if (ones == 6) printf("six\n");
                else if (ones == 7) printf("seven\n");
                else if (ones == 8) printf("eight\n");
                else                printf("nine\n");
            }
                else 
                {
                printf("\n");
                }
            }
            else
            {
            if (hundreds>0 && ones >= 0) //if there is hundreds place add "and" between hundreds and tens, unique case (10-19)
            printf("and ");
            if (ones >= 0) //if user input is 10-19, print the word itself
            {
                if (ones == 1)      printf("eleven\n");
                else if (ones == 2) printf("twelve\n");
                else if (ones == 3) printf("thirteen\n");
                else if (ones == 4) printf("fourteen\n");
                else if (ones == 5) printf("fifteen\n");
                else if (ones == 6) printf("sixteen\n");
                else if (ones == 7) printf("seventeen\n");
                else if (ones == 8) printf("eighteen\n");
                else if (ones == 9) printf("nineteen\n");
                else                printf("ten\n");
            }
        }
    }
    return 0;  
}