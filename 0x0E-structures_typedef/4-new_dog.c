#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcopy(char *dest, char *src);

/**
 * _strlen - Gets string length
 * @str: String value
 * Return: Length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str++)
	{
		i++;
	}
	return (i);
}

/**
 * _strcopy - Copy string including terminating null byte
 * @dest: Destination
 * @src: Source
 * Return: Pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - Create new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: New struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy->owner, owner);
	return (doggy);
}
