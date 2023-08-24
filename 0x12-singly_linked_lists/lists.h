#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_p - singly list
 * str: string malloc string
 * len: string length
 * next: points the node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);


#endif /* LISTS_H */
