//include all necessary file headers.
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

//declare snap function.
int snap(int *x, int *y);
int main(void)
{
    //declare all integers.
    int x;
    int y;

    //get a string from user in which  *name is a pointer to its first character.
    char *name = get_string("Your name: ");

    //create a pointer containing the address of memmory location of each integer variables.
    int *xloc = &x;
    int *yloc = &y;

    //using dereference operator to change the values of each integer variables.
    *xloc = 34;
    *yloc = 123;

    //print out the values of x and y.
    printf("x = %i : y = %i\n", x,y);

    //call snap function to swap the value of x and y.
    snap(&x, &y);

    //print the new swaped values of x and y.
    printf("new x = %i : new y = %i\n", x,y);

    //iterate through each character to print out the name.
    printf("Your name is: ");
    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
}

//snap function.
int snap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}