#include <iostream>


void bubbleSort(int* arr, const int& size)
{
	int passes{}; // # passes
	int swaps{}; // # swaps
	int flag{}; // break outer loop if already sorted

	// number of elements needs n-1 compilations
	for (int i = 0; i < size - 1; i++)
	{
		flag = 0;
		// on every pass compilations should be reduced by subtracting i
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1]);
				swaps++;
				std::cout << swaps << " :swaps\n";
				flag = 1;
			}
		}
		passes++;
		std::cout << passes << " :passes\n";
		if (flag == 0) break;
	}
}

void display(int* arr, const int& size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << "\n";
}

int main()
{

	int arr[] = { 1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);	
	display(arr, size);

	
	

	std::cout << "\n\n";
	system("pause");
	return 0;
}


