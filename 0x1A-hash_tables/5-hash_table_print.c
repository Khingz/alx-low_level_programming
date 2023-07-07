#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int comma = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (!comma)
				comma = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
