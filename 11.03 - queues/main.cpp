#include "queue.h"
#include "utils.h"

using namespace std;

void print_queue(queue_t q);

int main()
{
	queue_t small_nums, big_nums;
	int limit;

	cout << "Enter number: "; cin >> limit;
	read_numbers("numbers.txt", limit, small_nums, big_nums);
	print_queue(small_nums);
	print_queue(big_nums);

	clear(small_nums);
	clear(big_nums);
	return 0;
}

void print_queue(queue_t q)
{
	auto* curr = q.first;
	while (curr)
	{
		cout << curr->n << " ";
		curr = curr->next;
	}
	cout << endl;
}
