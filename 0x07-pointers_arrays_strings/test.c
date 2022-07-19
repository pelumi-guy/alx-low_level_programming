#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
        char *find;
        int i, l = 0;

        for (i = 0; *(s + i); i++)
                l++;

        for (i = 0; i < l; i++)
        {
                find = &s[i];

                if (*find == c)
                        break;
        }

        if (*find == c)
                return (find);
        else
                return (NULL);
}


int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
