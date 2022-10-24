#include <iostream>
using namespace std;

template <typename T>
void show_arr(T arr[], int size) 
{
	cout << "[";

	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

void fill_arr(int arr[], int size, int min, int max) 
{
	srand(time(NULL));

	for (int i = 0; i < size; i++)
		arr[i] = rand() % (max  -  min) + min;
}


int* resize_arr(int* arr, int* p_n, int new_n)
{
	if (*p_n == new_n) return arr;
	
	int* t = new int[new_n]();
	
	if (new_n < *p_n)
	{		
		for (int i = 0; i < new_n; i++)
		{
			t[i] = arr[i];
		}
	}
	else
	{
		for (int i = 0; i < *p_n; i++)
		{
			t[i] = arr[i];
		}
	}
	
	*p_n = new_n;
	
	return t;
}


int main()
{

	int   n = 8;
	int* arr = new int[n];

	fill_arr(arr, n, 5, 25);
	show_arr(arr, n);

	arr = resize_arr(arr, &n, 15);

	show_arr(arr, n);
	
}


