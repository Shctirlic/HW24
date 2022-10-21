#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



void fill_arr(int arr[], int size, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		arr[i] = rand() % (max Ц min) + min;
}

template <typename T>
void show_arr(T arr[], int size) {
	cout << "[";
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Russian");

	int n, m;
	cout << "¬ведите длины массивов: ";
	cin >> n >> m;
	int* A = new int[n];
	int* B = new int[m];


	cout << "Array A:\n";
	show_arr(A, n);
	cout << "Array B:\n";
	show_arr(B, m);

	int C = new int[n + m];
	for (int i = 0; i < n; i++)
		C[i] = A[i];
	for (int i = n; i < n + m; i++)
		C[i] = B[i Ц n];


	cout << "Array C:\n";
	show_arr(C, n + m);
	delete[] A;
	delete[] B;










	return 0;
}
