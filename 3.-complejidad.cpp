#include <bits/stdc++.h>
using namespace std;

int straightforwardAlgorithm(int array[], int n);
int mediumAlgorithm(int array[], int n);
int eficientAlgorithm(int array[], int n);

int main() {
    int n = 5; // n can be any number

    // The time complexity of the following code is O(n)
    for (int i = 0; i <= n; i++) { 
        // ...
    }
    // the time complexity of the following code is O(n^2)
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            // ...
        }
    }

    int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "\nThe maximum subarray is " << straightforwardAlgorithm(array, size);
    cout << "\nThe maximum subarray is " << mediumAlgorithm(array, size);
    cout << "\nThe maximum subarray is " << eficientAlgorithm(array, size);

    return 42;
}

// the time complexity is O(1) of each call
// the total time complexity is O(n)
void f(int n) {
    if (n == 1) return;
    f(n-1);
}

// each call throws anther two calls to g function
// so the time complexity is O(2^n)
// =========================================
//   function call    |   number of calls
// =========================================
//      g(n)          |     1
//      g(n-1)        |     2
//      g(n-2)        |     4
//      ...           |     ...
void g(int n) {
    if (n == 1) return;
    g(n-1);
    g(n-2);
}

// Maximun subarray sum
// Given an array of n numbers, our task is to calculate the maximum subarray 
// sum, i.e., the largest possible sum of a sequence of consecutive values in the
// array.
int straightforwardAlgorithm(int array[], int n) {
    int best = 0;

    // O(n^3)
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += array[k];
            }
            best = max(best, sum);
        }
    }
    return best;
}

int mediumAlgorithm(int array[], int n) {
    int best = 0;

    // O(n^2)
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += array[j];
            best = max(best, sum);
        }
    }
    return best;
}

int eficientAlgorithm(int array[], int n) {
    // O(n)
    int best = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }
    return best;
}
