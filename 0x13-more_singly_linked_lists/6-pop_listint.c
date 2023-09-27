#include "lists.h"

/**
 * pop_listint - Removes the head node of a connected list
 * @head: pointer to the 1st element in the connected list
 *
 * Return: the data inside the elements that was removed,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
