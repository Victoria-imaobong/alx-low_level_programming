#include "hash_tables.h"

/**
 * key_index - A function that returns the normalized index for a key.
 * @key: key
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2((unsigned char *)key);
	return (index % size);
}
