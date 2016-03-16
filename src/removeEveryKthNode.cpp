/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	int i = 1;
	struct node *ptr, *preptr=NULL;

	if (head == NULL || K < 0)
		return NULL;
	else if (K == 0 || K == 1)
		return NULL;
	else
	{
		ptr = head;
		while (ptr != NULL)
		{

			if (i % K == 0){
				preptr->next = ptr->next;
				ptr = ptr->next;

			}
			else
			{
				preptr = ptr;
				ptr = ptr->next;

			}

			i++;
		}
		return head;
	}
}