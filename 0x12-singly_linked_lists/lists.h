#ifndef LISTS_H_
#define LISTS_H_

/**
 * struct list_s - nodes of a singly linked list
 * @str: string
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: node structure for a singly linked list
 */
typedef struct  list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
