#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**



**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;


	new_hash = malloc(sizeof(hash_node_t));
	if (new_hash == NULL)
	{
		return (NULL);
	}

	new_hash->size = size;

	return (new_hash);
}
