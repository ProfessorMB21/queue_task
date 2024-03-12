#include "queue.h"

void enqueue(queue_t& q, int num)
{
	auto* new_el = new queue_el;
	new_el->n = num;
	new_el->prev = q.last;

	if (q.last)
		q.last->next = new_el;
	q.last = new_el;
	if (!q.first) q.first = new_el;
}

void clear(queue_t& q)
{
	queue_el* curr = q.first;
	while (curr)
	{
		const auto* temp = curr;
		curr = curr->next;
		delete temp;
	}
	q.first = q.last = nullptr;
}

bool dequeue(queue_t& q, int& num)
{
	if (!q.first) return false;
	num = q.first->n;
	queue_el* temp = q.first;
	q.first = q.first->next;
	if (q.first)
		q.first->prev = nullptr;
	else
		q.last = nullptr;
	delete temp;
	return true;
}
