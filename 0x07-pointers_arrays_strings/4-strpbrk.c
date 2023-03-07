#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *f){

   int i;
    int n;

    for(i=0; s[i] !='\0'; i++){

        for(n=0; f[n] !='\0'; n++){
            if(s[i] == f[n])
                return (s + i);


        }
    }

                return (NULL);

}
