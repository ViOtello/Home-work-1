#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;

int main()
{
	const int size = 10;
	int massive[size] = {};

	srand(time(0));

	for (int i = 0; i < size; i++) {
		massive[i] = rand() % 20;
		cout << massive[i] << "  ";
	}
	cout << "\n";

}
