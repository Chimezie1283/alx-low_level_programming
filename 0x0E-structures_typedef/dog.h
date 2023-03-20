#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The dog's profile
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The owner's name
 *
 * Description: Defines metadata about the dog and type of dog's struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;
 /**
 *dog_t - A prototype to replace sruct
 */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
