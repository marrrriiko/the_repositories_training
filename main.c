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
    printf("Hello world!\n");
    return 0;
>>>>>>> parent of cc179e2 (Promt user for last name as well.)
}
