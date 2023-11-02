#include "main.h"
/**
 * _realloc - reallocate a memory block
 * @ptr: ptr to mem
 * @old_size: size in bytes of ptr
 * @new_size: new size
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}

	free(ptr);

	return (new_ptr);
}
