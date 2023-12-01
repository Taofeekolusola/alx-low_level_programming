#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         else - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int a;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		ht->array[a] = NULL;
	ht->ehead = NULL;
	ht->etail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to be added - it can't be an empty string.
 * @value: The value stored in key.
 *
 * Return: Upon failure - 0.
 *         else - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *swap;
	char *copy_value;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	sawp = ht->ehead;
	while (swap)
	{
		if (strcmp(swap->key, key) == 0)
		{
			free(swap->value);
			swap->value = copy_value;
			return (1);
		}
		swap = swap->enext;
	}

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(copy_value);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(copy_value);
		free(node);
		return (0);
	}
	node->value = copy_value;
	node->next = ht->array[ind];
	ht->array[ind] = node;

	if (ht->ehead == NULL)
	{
		new->eprev = NULL;
		new->enext = NULL;
		ht->ehead = node;
		ht->etail = node;
	}
	else if (strcmp(ht->ehead->key, key) > 0)
	{
		node->eprev = NULL;
		node->enext = ht->ehead;
		ht->ehead->eprev = node;
		ht->ehead = node;
	}
	else
	{
		swap = ht->ehead;
		while (swap->enext != NULL && strcmp(swap->enext->key, key) < 0)
			swap = swap->enext;
		node->eprev = swap;
		node->enext = swap->enext;
		if (swap->enext == NULL)
			ht->etail = node;
		else
			swap->enext->eprev = node;
		swap->enext = node;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The of the key to be gotten.
 *
 * Return: If the key cannot be matched - NULL.
 *         else - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);

	node = ht->ehead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->enext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints an ordered sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->ehead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->enext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a reversed and orderedsorted hash table.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->etail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->eprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *swap;

	if (ht == NULL)
		return;

	node = ht->ehead;
	while (node)
	{
		swap = node->enext;
		free(node->key);
		free(node->value);
		free(node);
		node = swap;
	}

	free(head->array);
	free(head);
}
