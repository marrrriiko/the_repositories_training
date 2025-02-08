<<<<<<< HEAD
/* main.c */ 
#include <stdio.h> 
#include <string.h> // Не забудьте подключить библиотеку для strlen

#include "askname.h" 

int main(int argc, char **argv) 
{ 
    char first[255], last[255]; 

    askname(first, last); 

    printf("Hello, %s %s!\n", first, last); 

    return 0; 
=======
#include <stdio.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("Enter your name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */

    printf("Hello %s!\n", name);
    return 0;
>>>>>>> parent of cc179e2 (Promt user for last name as well.)
}
