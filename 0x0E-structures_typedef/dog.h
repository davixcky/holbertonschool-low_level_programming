#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Animal
 * @name: Name of the animal
 * @age: Age of the animal
 * @owner: Name of the owner
 *
 * Description: Animal
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
