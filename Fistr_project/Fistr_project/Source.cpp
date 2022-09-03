#include<iostream>
#include<time.h>

using namespace std;

#define SIZE 10

int main()
{
	srand(time(0));

	int arr[SIZE], max, min;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
	
	max = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	cout<<"max = " << max << endl;

	min = arr[0];
	for (int i = 1; i < SIZE; i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	cout<<"min = " << min << endl;
}