#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the table
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int n;

	if (size == 0)
		return (NULL);

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		h_table->array[n] = NULL;

	return (h_table);
}
