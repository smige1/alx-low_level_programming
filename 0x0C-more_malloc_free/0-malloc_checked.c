#include <stdlib.h>
#include <stdio.h>
/* This function allocates memory using malloc and handles errors gracefully.
 *
 * Parameters:
 * b - The number of bytes to allocate.
 *
 * Returns:
 * A pointer to the allocated memory. If malloc fails, the function terminates
 * the process with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL) 
{
fprintf(stderr, "Error: malloc failed\n");
exit(98);
}
return ptr;
}
