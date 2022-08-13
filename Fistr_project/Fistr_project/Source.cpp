#include<iostream>
#include<time.h>

using namespace std;

#define SIZE 10

int main()
{
	srand(time(0));

	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
}