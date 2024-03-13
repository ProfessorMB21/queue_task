#pragma once
#include <stdlib.h>
#include <iostream>

// A structure to represent an element(node) for the queue
struct queue_el
{
	int n;
	queue_el* next = nullptr;
	queue_el* prev = nullptr;
};

// A structure to represent a queue of elements
struct queue_t
{
	queue_el* first = nullptr;
	queue_el* last = nullptr;
};

void enqueue(queue_t& q, int num);
void clear(queue_t& q);
bool dequeue(queue_t& q, int& num);
void print_queue(queue_t& q);
