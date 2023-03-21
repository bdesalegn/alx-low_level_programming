#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's information
 * @name: dog name
 * @age: dogs age
 * @owner: dog's owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif/*dog_h*/
