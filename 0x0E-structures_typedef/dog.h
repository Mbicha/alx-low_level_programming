#ifndef _DOG_H
#define _DOG_H

/**
*struct dog - structure for dog
*@name: Name of dog
*@age: Age of a dog
*@owner: Dog's owner
*Description: data structure for dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
