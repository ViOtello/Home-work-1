#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


template < typename T >
int myswap(T* first, T* second) {
	const int size = 10;
	T temp[size];
	for (T i = 0; i < size; i++) {
		temp[i] = first[i];
		first[i] = second[i];
		second[i] = temp[i];
	}
	return 0;
}

template < typename T >
int print(T* first) {
	const T size = 10;
	for (T i = 0; i < size; i++) {
		cout << setw(2) << first[i] << "   ";
	}
	cout << "\n";
	return 0;
}

int main()
{
	setlocale(LC_ALL, "russian");

	const int size = 10;
	int massiveA[size] = {};
	int massiveB[size] = {};

	srand(time(0));

	cout << "Начальные массивы: \n";

	for (int i = 0; i < size; i++) {
		massiveA[i] = rand() % 20;
		cout << setw(2) << massiveA[i] << "   ";
	}
	cout << "\n";

	for (int i = 0; i < size; i++) {
		massiveB[i] = rand() % 20;
		cout << setw(2) << massiveB[i] << "   ";
	}
	cout << "\n";

	cout << "\n\nМассивы после функции своп: \n";
	myswap(massiveA, massiveB); // Передаём ссылки
	print(massiveA);
	print(massiveB);
}
