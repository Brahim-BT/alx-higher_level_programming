#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse - reverses the second half of the list
 * @h_r: head of the second half
 * Return: no return
 */

void reverse(listint_t **h_r)
{
    listint_t *current;

    listint_t *previous;

    listint_t *next;

    current = *h_r;
    previous = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    *h_r = previous;
}

/**
 * compare - compares each int of the list
 *
 * @h1: head of the first half
 * @h2: head of the second half
 * Return: 1 if are equals, 0 if not
 */
int compare(listint_t *h1, listint_t *h2)
{
    listint_t *tmp1;

    listint_t *tmp2;

    tmp1 = h1;
    tmp2 = h2;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->n == tmp2->n)
        {
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        else
            return (0);
    }
    if (tmp1 == NULL && tmp2 == NULL)
        return (1);
    return (0);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to pointer of first node of listint_t list
 * Return: 0 or 1
 */

int is_palindrome(listint_t **head)
{
    listint_t *dealer, *mdl;

    int asap;

    listint_t *guy, *furues, *motion;

    mdl = NULL;
    guy = furues = motion = *head;
    asap = 1;
    if (*head != NULL && (*head)->next != NULL)
    {
        while (furues != NULL && furues->next != NULL)
        {
            furues = furues->next->next;
            motion = guy;
            guy = guy->next;
        }

        if (furues != NULL)
        {
            mdl = guy;
            guy = guy->next;
        }

        dealer = guy;
        motion->next = NULL;
        reverse(&dealer);
        asap = compare(*head, dealer);

        if (mdl != NULL)
        {
            motion->next = mdl;
            mdl->next = dealer;
        }
        else
        {
            motion->next = dealer;
        }
    }
    return (asap);
}