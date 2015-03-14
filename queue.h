#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdio.h>
#include <stdbool.h>

struct Element {
	int data;
	struct Element *next;
	int priority;
};

struct Element *Element_construct(int data, int priority);
struct Element *Element_append(struct Element *other);

struct Queue {
	struct Element *first;
	struct Element *last;
	int numElements;
};

/*
Queue constructor
Generates a valid queue object
*/
struct Queue *Queue_construct();

/*
Pushes a new element into a queue
param: the queue to act upon
param: the data to push
*/
void Queue_push(struct Queue *q, int data);

/*
Pushes a new element into the queue
param: the queue to act upon
param: the data to push into the queue
param: the priority of the element
*/
void Queue_pushWithPriority(struct Queue *q, int data, int priority);

/*
Removes an element from the queue
param: the queue to act upon
param: will point to the popped value
returns: false if the queue was empty before pop
*/
bool Queue_pop(struct Queue *q, int *output);

/*
Returns the first element from the queue without removing it
param: the queue to act upon
param: will point to the peeked value
returns: false if the queue was empty before peek
*/
bool Queue_peek(struct Queue *q, int *output);

/*
Finds a value in the queue
param: the queue to act upon
param: the value to look for
returns: the number of times a value occurs in the queue
*/
int Queue_find(struct Queue *q, int *needle);

#endif // __QUEUE_H__