#include <iostream>
#include <time.h>
using namespace std;

#define tab "\t"

const int s = 10;
int arr[s];

void Fill_arr();
void Show_arr(int* arr, int size);
int Even_num();
void Copi_arr(int* even, int* odd);

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));
	Fill_arr();
	cout << "массив arr" << tab;
	Show_arr(arr, s);
	cout << endl;
	int ev = Even_num();
	int od = s - ev;
	int* even = new int[ev];
	int* odd = new int[od];
	Copi_arr(even, odd);
	cout << "массив even" << tab;
	Show_arr(even, ev);
	cout << endl;
	cout << "массив odd" << tab;
	Show_arr(odd, od);
	delete[] even;
	delete[] odd;
	even = nullptr;
	odd = nullptr;
}

void Fill_arr()
{
	for (int i = 0; i < s; i++) {

		arr[i] = 1 + rand() % 20;
	}
}
void Show_arr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
int Even_num()
{
	int ev = 0;
	for (int i = 0; i < s; i++) {

		if (arr[i] % 2 == 0)
			ev++;
	}
	return ev;
}
void Copi_arr(int* even, int* odd)
{
	int j = 0, k = 0;
	for (int i = 0; i < s; i++)
	{
		if (arr[i] % 2 == 0) {
			even[j] = arr[i];
			j++;
		}
		else {
			odd[k] = arr[i];
			k++;
		}
	}
}