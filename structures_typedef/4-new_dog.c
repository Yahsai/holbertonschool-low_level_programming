#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 *new_dog - initializes a variable of type
 *@age: age
 *@name: name
 *@owner: owner
 *Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	else
		strcpy(ndog->name, name);

	ndog->age = age;
	ndog->owner = malloc(strlen(owner) + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	else
		strcpy(ndog->owner, owner);

	return (ndog) ;
}
