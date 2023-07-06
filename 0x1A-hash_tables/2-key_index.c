#include "hash_tables.h"

/**
 * key_index - Key index
 * @key: The key to hash
 * @size: Size of array
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
