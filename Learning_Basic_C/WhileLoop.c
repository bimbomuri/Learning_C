#include <stdio.h>
#include <string.h>


int main()

{
    //while loop will repeat a section of code possibly unlimited times.
    char name[25];
    printf("\nWhat's your name?:  ");
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';

    while (strlen(name) == 0)
    {
       printf("You did not enter your name");
       printf("\nWhat's your name?:  ");
       fgets(name,25,stdin);
       name[strlen(name)-1] = '\0';
    }

    printf("Welcome %s", name);
    return 0;
}