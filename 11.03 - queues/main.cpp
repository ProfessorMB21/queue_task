#include "queue.h"
#include "utils.h"

using namespace std;

void print_queue(queue_t &q);

int main()
{
	queue_t small_nums;
	queue_t big_nums;
	int limit;

	cout << "Enter number: "; cin >> limit;
	read_numbers("numbers.txt", limit, small_nums, big_nums);
	
	cout << "Numbers less than (<) " << limit << endl;
	print_queue(small_nums); cout << "\n\n";
	cout << "Numbers greater than or equal to (>=) " << limit << endl;
	print_queue(big_nums);
	cout << endl;

	// clean up
	clear(small_nums);
	clear(big_nums);
	return 0;
}

void print_queue(queue_t &q)
{
	auto* curr = q.first;
	while (curr != NULL)
	{
		cout << curr->n << " ";
		curr = curr->next;
	}
	cout << endl;
}
