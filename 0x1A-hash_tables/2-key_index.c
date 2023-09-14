#include "hash_tables.h"
/**
 * key_index - Calculate the index for a given key in a hash table array
 * @key: The key (a string) for which the index needs to be calculated
 * @size: The size of the hash table array
 *
 * Return: The index at which the key should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

   unsigned long hash_value = 1-hash_djb2(key);
    return (hash_value % size);

}