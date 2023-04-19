#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - calculates length of a string.
 * @str:  string to be measured.
 *
 * Return:length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: buffer storing the string copy.
 * @src: source string.
 *
 * Return: pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int x = 0;

	for (x= 0; src[x]; x++)
		dest[x] = src[x];

	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - Creates  new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogi;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogi = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	dogi->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogi->name == NULL)
	{
		free(dogi);
		return (NULL);
	}

	dogi->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogi->owner == NULL)
	{
		free(dogi->name);
		free(dogi);
		return (NULL);
	}

	dogi->name = _strcopy(doggo->name, name);
	dogi->age = age;
	dogi->owner = _strcopy(doggo->owner, owner);

	return (dogi);
}
