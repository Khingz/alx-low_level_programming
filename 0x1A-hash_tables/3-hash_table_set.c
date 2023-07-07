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
	unsigned long int index;
	hash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	copy_val = strdup(value);
	if (copy_val == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = copy_val;
			return (1);
		}
		tmp = tmp->next;
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
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
