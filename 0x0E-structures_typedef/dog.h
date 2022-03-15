#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data structure
 * @name: Name of the dog
 * @age: Dog age
 * @owner: owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG_H */
