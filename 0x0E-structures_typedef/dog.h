#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
/**
 * struct dog - A simple structure describing a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description:
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dot_t;
/* dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d); */


#endif /* MAIN_H */
