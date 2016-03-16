/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node {
	int num;
	struct node *next;
};
int count(int n)
{
	int s = 1, x;
	while (n != 0)
	{
		n = n / 10;
		s = s * 10;
	}
	x = s / 10;
	return x;
}

struct node * numberToLinkedList(int N) {
	struct node *start = NULL, *newnode, *ptr;
	int s, x,M=N;
	if (N == 0)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = N;
		newnode->next = NULL;
		start = newnode;
		return start;
	}
	else
	{
		if (N < 0)
			M = -(N);
		s = count(M);
		while (M != 0)
		{
			x = M / s;
			newnode = (struct node *)malloc(sizeof(struct node));
			newnode->num = x;
			if (start == NULL)
			{
				newnode->next = NULL;
				start = newnode;
			}
			else
			{
				ptr = start;
				while (ptr->next != NULL)
					ptr = ptr->next;
				ptr->next = newnode;
				newnode->next = NULL;
			}

			M = M % s;
			s = s / 10;

		}
		return start;
	}

}
