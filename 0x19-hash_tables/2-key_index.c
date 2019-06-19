#include "hash_tables.h"

/**
 * key_index - get the index of a key
 *@key: the key
 *@size: size of array
 *Return: new hash
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = hash_djb2(key);
	c = hash % size;

	return (c);

}
