#pragma once
#include <stdlib.h>
#include <iostream>


struct queue_el
{
	int n;
	queue_el* next;
	queue_el* prev;
};

struct queue_t
{
	queue_el* first = nullptr;
	queue_el* last = nullptr;
};

void enqueue(queue_t& q, int num);
void clear(queue_t& q);
bool dequeue(queue_t& q, int& num);
