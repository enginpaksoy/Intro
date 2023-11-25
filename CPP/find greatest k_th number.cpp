#include <iostream>
using namespace std;

int k_th_number(int k_th);

int main() {
	printf("%d", k_th_number(3));
}

int k_th_number(int k_th) {
	int n;
	cin >> n;
	int group_number[30];
	for (size_t i = 0; i < n; i++)
	{
		cin >> group_number[i];
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (group_number[j] < group_number[j + 1]) {
				int hold = group_number[j];
				group_number[j] = group_number[j + 1];
				group_number[j + 1] = hold;
			}
		}
	}
	return group_number[k_th - 1];
}
