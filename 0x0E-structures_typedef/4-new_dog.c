#include <stdlib.h>
#include "dog.h"

/**
 * _copy - Entry point
 * Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to copy
 * Return: a pointer to the duplicated string
 * NULL if insufficient memory or if @str is NULL
 */

char *_copy(char *str)
{
	char *arr;
	unsigned int p = 0;
	unsigned int q = 0;

	if (str == NULL)
		return (NULL);
	while (str[p])
		p++;
	arr = malloc(sizeof(char) * (p + 1));
	if (arr == NULL)
		return (NULL);
	while (str[q])
	{
		arr[q] = str[q];
		q++;
	}
	arr[q] = 0;
	return (arr);
}

/**
 * new_dog - Entry point
 * Creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDog;
	char *NewName;
	char *NewOwner;

	NewDog = malloc(sizeof(dog_t));
	if (NewDog == NULL)
		return (NULL);
	NewName = _copy(name);
	if (!NewName && name)
	{
		free(NewDog);
		return (NULL);
	}
	NewOwner = _copy(owner);
	if (!NewOwner && owner)
	{
		free(NewName);
		free(NewDog);
		return (NULL);
	}
	NewDog->name = NewName;
	NewDog->age = age;
	NewDog->owner = NewOwner;
	return (NewDog);
}
