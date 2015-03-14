#include <stdbool.h>

struct element {
	int data;
	element next*;
	int weight;
};

typedef bool

element* element_construct(int data);
element* element_append(element* other);

typedef enum {
	QUEUE_TYPE_NORMAL = 0,
	QUEUE_TYPE_WEIGHTED = 1
} queue_type;

struct queue {
	element first*;
	element last*;
	queue_type type;
	int numElements;
};

/*
Queue constructor
should generate a valid queue object
*/
queue* queue_construct(queue_type type);

/*
Pushes a new element into a queue
*/
void queue_push(queue* q, int data);

/*
Removes a
*/
int queue_pop(queue* q, );


int queue_peek(queue* q);

int queue_find(queue* q, int data);