/*
Program Name: Converter Program
Program Purpose: Performs simple measurement unit conversions (Kilograms,Pounds,Hectares,Acres,Litres,Gallons,Kilometres,Miles)
Author: Laurence Lu
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int user_input1;  //first user input menu variable   
    char user_input2;  //second user input menu variable
    float Kilograms,Pounds,Hectares,Acres,Litres,Gallons,Kilometres,Miles;  //unit conversion variables
    printf("Enter what you want to do: \n");
    printf("1 for conversion between Kilograms and Pounds (1 kilogram == 2.20462 pounds) \n");
    printf("2 for conversion between Hectares and Acres (1 hectare == 2.47105 acres) \n");
    printf("3 for conversion between Litres and Gallons (1 litre == 0.264172 gallons) \n");
    printf("4 for conversion between Kilometre and Mile (1 kilometre == 0.621371 miles) \n");
    printf("5 for quit \n");
    scanf("%d", &user_input1);

    if (user_input1 == 1) 
    {
        printf("Enter what you want to do: \n");
        printf("K for conversion from Kilograms to Pounds \n");
        printf("P for conversion from Pounds to Kilograms \n");
        scanf("%c", &user_input2);
        
        user_input2 = getchar();
        if (user_input2 == 'K')
        {
            printf("Please enter a value for Kilograms: ");
            scanf("%f", & Kilograms);
            Pounds = (Kilograms * 2.20462); //conversion from Kilograms to Pounds
            printf("Your conversion to Pounds is: %f\n",Pounds);
            return main();
        }
        if (user_input2 == 'P')
        {
            printf("Please enter a value for Pounds: ");
            scanf("%f", &Pounds);
            Kilograms = (Pounds / 2.20462); //conversion from Pounds to Kilograms
            printf("Your conversion to Kilograms is: %f\n",Kilograms);
            return main();
        }
    }
    else if (user_input1 == 2)
    {
        printf("Enter what you want to do: \n");
        printf("H for conversion from Hectares to Acres \n");
        printf("A for conversion from Acres to Hectares \n");
        scanf("%c", &user_input2);

        user_input2 = getchar();
        if (user_input2 == 'H')
        {
            printf("Please enter a value for Hectares: ");
            scanf("%f", &Hectares);
            Acres = (Hectares * 2.47105); //conversion from Hectares to Acres
            printf("Your conversion to Acres is: %f\n",Acres);
            return main();
        }
        if (user_input2 == 'A')
        {
            printf("Please enter a value for Acres: ");
            scanf("%f", &Acres);
            Hectares = (Acres / 2.47105); //conversion from Acres to Hectares
            printf("Your conversion to Hectares is: %f\n",Hectares);
            return main();
        }
    }
    else if (user_input1 == 3)
    {
        printf("Enter what you want to do: \n");
        printf("L for conversion from Litres to Gallons \n");
        printf("G for conversion from Gallons to Litres \n");
        scanf("%c", &user_input2);

        user_input2 = getchar();
        if (user_input2 == 'L')
        {
            printf("Please enter a value for Litres: ");
            scanf("%f", &Litres);
            Gallons = (Litres * 0.264172); //conversion from Litres to Gallons
            printf("Your conversion to Gallons is: %f\n",Gallons);
            return main();
        }
        if (user_input2 == 'G')
        {
            printf("Please enter a value for Gallons: ");
            scanf("%f", &Gallons);
            Litres = (Gallons / 0.264172); //conversion from Gallons to Litres
            printf("Your conversion to Litres is: %f\n",Litres);
            return main();
        }
    }
    else if (user_input1 == 4)
    {
        printf("Enter what you want to do: \n");
        printf("K for conversion from Kilometre to Mile \n");
        printf("M for conversion from Mile to Kilometre \n");
        scanf("%c", &user_input2);

        user_input2 = getchar();
        if (user_input2 == 'K')
        {
            printf("Please enter a value for Kilometres: ");
            scanf("%f", &Kilometres);
            Miles = (Kilometres * 0.621371); //conversion from Kilometre to Mile
            printf("Your conversion to Miles is: %f\n",Miles);
            return main();
        }
        if (user_input2 == 'M')
        {
            printf("Please enter a value for Miles: ");
            scanf("%f", &Miles);
            Kilometres = (Miles / 0.621371); //conversion from Mile to Kilometre
            printf("Your conversion to Kilometres is: %f\n",Kilometres);
            return main();
        }
    }
    else if (user_input1 == 5) //exit program if user types 5
    {
        exit(0);
    }
    else
    {
        printf("Try again \n"); //returns back to begining of program if user type invalid input
        return main();
    }
}