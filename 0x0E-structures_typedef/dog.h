#ifndef _DOG_
#define _DOG_
/**
 * struct dog - short description
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
