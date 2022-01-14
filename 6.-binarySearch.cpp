#include <bits/stdc++.h>
using namespace std;

int method1(int array[], int n, int target);
int method2(int array[], int n, int target);

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 9;

    int index = method2(array, size, target);
    cout << "The " << target << " value is in position: " << index;

    return 42;
}

int method1(int array[], int n, int target) {
    int a = 0, b = n - 1;

    // O(log2 n)
    while (a <= b) {
        int k = (a + b) / 2;
        if (array[k] == target) {
            return k;
        }

        // Esto reduce a la mitad los elementos a buscar
        if (array[k] > target) b = k - 1;
        else a = k + 1;
    }
}

int method2(int array[], int n, int target) {
    // O(log2 n)
    int k = 0;
    
    for (int b = n/2; b >= 1; b /=2) {
        while (k+b < n && array[k+b] <= target) k += b;
    }

    if (array[k] == target) {
        return k;
    } else {
        return -1;
    }
}
