#include <bits/stdc++.h>
using namespace std;

void add(int *array, int left, int right, int increment)
{
    --left;
    --right;

    for (int i = left; i <= right; i++)
    {
        array[i] += increment;
    }
}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main(void)
{
    int array[] = {1, 1, 1, 4, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    cout << endl;
    printArray(array, size);
    add(array, 1, 5, 2);
    add(array, 2, 3, 10);
    cout << endl;
    printArray(array, size);

    return 42;
}
