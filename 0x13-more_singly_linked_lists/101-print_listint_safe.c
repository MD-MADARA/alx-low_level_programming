#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list
 * This function can print lists with a loop.
 * @head: head of the list.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	list_addr *l_address = NULL;
	char *address;

	if (head == NULL)
		return (0);

	while (head)
	{
		address = (void *)head;
		printf("[%p] %d\n", address, head->n);

		if (search_list(l_address, address))
		{
			printf("-> [%p] %d\n", (void *) head, head->n);
			break;
		}
		add_node_end(&l_address, address);

		head = head->next;
		i++;
	}
	return (i);
}
/**
 * search_list - a function that search for value in list
 * @head: the head of the list
 * @value: the value to search
 *
 * Return: 1 if success or 0 if not
 */
int search_list(list_addr *head, void *value)
{
	list_addr *l = head;

	while (l)
	{
		if (l->address == value)
			return (1);
		l = l->next;
	}
	return (0);
}
/**
 * add_node_end - add  a new node to the beggining of the listint_t.
 * @head: pointer to pointer *head, that point to the structure.
 * @n: element to add
 *
 * Return: the new node
 */

list_addr *add_node_end(list_addr **head, void *n)
{
	list_addr *new_node = NULL;
	list_addr *ptr = NULL;

	new_node = (list_addr *)malloc(sizeof(list_addr));
	if (!new_node)
		exit(98);
	new_node->address = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);
}
