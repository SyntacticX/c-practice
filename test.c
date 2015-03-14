#include "queue.h"

int main(int argc, char **argv) {
	int *temp;
	struct Queue *q;

	q = Queue_construct();
	Queue_push(q, 1);
	Queue_pop(q, temp);

	printf("temp = %i", *temp);

	return 0;
}