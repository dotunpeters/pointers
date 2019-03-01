//include all necessary file headers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define custom data type
typedef char* string;

//declare snap function.
int snap(int *x, int *y);
int main(void)
{
    //declare all integers.
    int x;
    int y;

    //get a string from user in which  *name is a pointer to its first character.
    char *name = malloc(sizeof(char));
    printf("Your name: ");
    scanf("%s", name);

    //create a pointer containing the address of memmory location of each integer variables.
    int *xloc = &x;
    int *yloc = &y;

    //using dereference operator to change the values of each integer variables.
    printf("value x: ");
    scanf("%i", &x);
    printf("value y: ");
    scanf("%d", &y);

    //print out the values of x and y.
    printf("\nYou input the following values:\nx = %i : y = %i\n", x,y);

    //call snap function to swap the value of x and y.
    snap(&x, &y);

    //print the new swaped values of x and y.
    printf("new x = %i : new y = %i\n", x,y);

    //iterate through each character to print out the name.
    printf("Thank you ");
    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c", name[i]);

        //add a fullstop to the end of the name if user doesn't
        string stop = "xy.";
        if (name[i] != stop[2])
        {
            if (i == (strlen(name)-1))
            {
                printf("%c\n", stop[2]);
            }
        }
    }
    printf("Goodbye...\n");
}

//snap function.
int snap(int *x, int *y)
{
    printf("\nswaping the value of x & y...\n\n");
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}