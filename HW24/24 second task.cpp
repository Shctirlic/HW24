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


int main()
{
	setlocale(LC_ALL, "ru");

	int n, m;
	cout << "Введите длины массивов: ";
	cin >> n >> m;

	int* A = new int[n];
	int* B = new int[m];

	fill_arr(A, n, 10, 31);
	fill_arr(B, m, 50, 71);

	cout << "Array A:\n";
	show_arr(A, n);
	cout << "Array B:\n";
	show_arr(B, m);


	int* C = new int[n + m];

	for (int i = 0; i < n; i++)
		C[i] = A[i];
	for (int i = n; i < n + m; i++)
		C[i] = B[i - n];


	cout << "Array C:\n";
	show_arr(C, n + m);

	delete[] A;
	delete[] B;
	delete[] C;
}


