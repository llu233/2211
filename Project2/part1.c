/*
Program Name: Array Manipulation Program
Program Purpose: Asks users to provide 5 - 12 integers and the program will 
- give the size of the array in bytes
- print the elements of the array and which position they are in
- print the largest value in the array
- print the elements of the array in reverse order
- print the sum of all values in the array
- print the elements of the array from largest to smallest (descending order)
- print the elements of the array except the first and last element are swapped
Author: Laurence Lu 
*/
#include <stdio.h>
#include <stdlib.h>

void part1(int array[],int length) //print index and element of array 
{
    printf("Part 1:\n");
    printf("Your array is: ");
    for (int i = 0; i < (length/sizeof(array[0])); i++) {
        printf("[%d] = %d, ", i, array[i]);
    } 
    printf("\n");
}
int part2(int array[],int length) //print out largest value in array
{
    int max = 0;
    for (int i = 0; i < (length / sizeof(array[0])); i++) {
        if (array[max] < array[i]) {
            max = i;
        }
    }
    printf("Part 2:\n");
    printf("The largest value in your array is: %d\n", array[max]);
}
void part3(int array[],int length) //print the elements of the array in reverse order
{
    printf("Part 3:\n");
    printf("Your array in reverse is: ");
    for (int i = (length / sizeof(array[0])) - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int part4(int array[],int length) //print the sum of all values in the array
{
    printf("Part 4:\n");
    int sum = 0;
    for (int i = 0; i < (length / sizeof(array[0])); i++) {
        sum += array[i];
    }
    printf("The sum of all values in your array is: %d\n",sum);
}
void part5(int array[],int length) //print the elements of the array from largest to smallest (descending order)
{
    printf("Part 5:\n");
    printf("Your array in sorted order is: ");
    for (int i = 0; i < (length / sizeof(array[0])); i++) {
        for (int j = 0; j < (length / sizeof(array[0])); j++) {
            if (array[j]<array[i]){
                int tmp = array[i];

                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    for (int i = 0; i < (length / sizeof(array[0])); i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void part6(int array[],int length) //print the elements of the array except the first and last element are swapped
{
    printf("Part 6:\n");
    int first = array[0];
    array[0]=array[length/sizeof(array[0])-1]; 
    array[length/sizeof(array[0])-1]=first;
    printf("Your array with first and last element switched is: ");
    for (int i = 0; i < (length / sizeof(array[0])); i++) {
        printf("%d ",array[i]);
    }  
    printf("\n");
}

int main(void) //main function
{
    int user_input;
    printf("Please enter the number of integers to process (min 5, max 12): \n");
    scanf("%i", &user_input);
    if (5 <= user_input && user_input <= 12)
    {
        int array[user_input];
        int n = sizeof(array);
        int array2[user_input];
        printf("There is enough room in your array for %i integers (%d bytes)\n", user_input, n);
        printf("Please enter your integers separated by spaces: ");
        for (int i = 0; i < (int) (sizeof(array) / sizeof(array[0])); i++) {
            scanf("%d", &array[i]);
            array2[i]=array[i];
        }
        part1(array,sizeof(array)); //call function part1
        part2(array,sizeof(array)); //call function part2
        part3(array,sizeof(array)); //call function part3
        part4(array,sizeof(array)); //call function part4
        part5(array,sizeof(array)); //call function part5
        part6(array2,sizeof(array)); //call function part6
    }
    else
    {
        printf("Try again \n"); //returns back to begining of program if user type invalid input
        return main();
    }
}
