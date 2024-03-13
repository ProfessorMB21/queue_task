#include "utils.h"

using namespace std;
void read_numbers(const char* filename, int element_, queue_t& q_before, queue_t& q_after)
{
	ifstream file(filename);
	
	if (file)
	{
		int n;
		while (!file.eof())
		{
			file >> n;
			enqueue(n < element_ ? q_before : q_after, n);
		}
		file.close();
	}
	cout << endl;
}
