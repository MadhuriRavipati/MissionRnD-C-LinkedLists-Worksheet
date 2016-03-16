/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int i, j, c0 = 0, c1 = 0, c2 = 0;
	struct node *ptr, *p;
	ptr = head;
	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		if (ptr->data == 0)
			c0++;
		else if (ptr->data == 1)
			c1++;
		else
			c2++;
		ptr = ptr->next;
	}
	p = head;
	while (c0 != 0)
	{
		p->data = 0;
		p = p->next;
		c0--;
	}
	while (c1 != 0)
	{
		p->data = 1;
		p = p->next;
		c1--;
	}
	while (c2 != 0)
	{
		p->data = 2;
		p = p->next;
		c2--;
		
	}
	p = head;

	
}