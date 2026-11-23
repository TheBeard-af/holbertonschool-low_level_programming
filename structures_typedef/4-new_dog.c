#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;
	int name_len, owner_len;

	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;
	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	for (j = 0; j < owner_len; j++)
	{
		dog->owner[j] = owner[j];
	}
	dog->owner[j] = '\0';
	dog->age = age;
	return (dog);
}
