#include "hash_tables.h"

/**
 * hash_table_set - insert into a hashtable
 * @ht:  hashtable to insert
 * @key: hash key
 * @value: Value
 * Return: 1 if succedd or 0 if faiilure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy_val;
	unsigned long int index, i;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	copy_val = strdup(value);
	if (copy_val == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; ht->array[i] = ht->array[i]->next)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_val;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copy_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copy_val;
	if (ht->array[index] == NULL)
		new->next = NULL;
	else
		new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
