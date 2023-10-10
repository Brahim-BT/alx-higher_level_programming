#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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