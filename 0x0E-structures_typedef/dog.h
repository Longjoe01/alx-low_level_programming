#ifndef DOG_H
#define DOG_H
/**
* struct dog - contains a struct for dog's characteristics
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;






#endif /* DOG_H */
