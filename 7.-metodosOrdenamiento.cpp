// Sorting
#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b);
void showArray(int array[], int n);
int getSmallestIndex(int array[], int start, int end);
void insertNth(int array[], int n, int i);

void bubbleSort(int array[], int n);
void selectionSort(int array[], int n);
void insertionSort(int array[], int n);
void mergeSort(int array[], int n);


int main() {
    int array[] = {1, 3, 8, 2, 9, 2, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Buble Sort: ";
    bubbleSort(array, size);
    showArray(array, size);

    int array2[] = {1, 3, 8, 2, 9, 2, 5, 6};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    cout << "Selection Sort: ";
    selectionSort(array2, size2);
    showArray(array2, size2);
    
    int array3[] = {1, 3, 8, 2, 9, 2, 5, 6};
    int size3 = sizeof(array3) / sizeof(array3[0]);

    cout << "Insertion Sort: ";
    insertionSort(array3, size3);
    showArray(array3, size3);
    
    int array4[] = {1, 3, 8, 2, 9, 2, 5, 6};
    int size4 = sizeof(array4) / sizeof(array4[0]);

    cout << "Merge Sort: ";
    mergeSort(array4, size4);
    showArray(array4, size4);

    return 42;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void showArray(int array[], int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        if (i == n-1) {
            cout << array[i] << " ";
        } else {
            cout << array[i] << ", ";
        }
    }
    cout << "]\n";
}

// Bubble sort
void bubbleSort(int array[], int n) {
    // O(n^2)
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n-1; j++) {
            if (array[j] > array[j+1]) {
                swap(array[j], array[j+1]);
            }
        }
    }
}

// Selection sort
int getSmallestIndex(int array[], int start, int end) {
    int i = start;
    int j = i;
    
    while (i <= end) {
        if (array[i] < array[j]) {
            j = i;
        }
        i++;
    }

    return j;
}

void selectionSort(int array[], int n) {
    int i = 0;
    while (i < n-1) {
        // O(n^2)
        int j = getSmallestIndex(array, i, n-1);
        swap(array[i], array[j]);
        i++;
    }
}

// Insertion sort
void insertNth(int array[], int n, int i) {
    int key = array[i];
    int j = i-1;

    while (j >= 0 && array[j] > key) {
        array[j+1] = array[j];
        j--;
    }

    array[j+1] = key;
}
void insertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) {
        insertNth(array, n, i);
    }
}


// Merge sort
void merge(int array[], int start, int middle, int end) {
    int* buffer = new int [end+1]; // total size of the merge array
    int k = start;
    while (k <= end) {
        buffer[k] = array[k];
        k++;
    }
    int i = start;
    int j = middle + 1;
    k = start;

    while (i <= middle && j <= end) {
        if (buffer[i] <= buffer[j]) {
            array[k] = buffer[i];
            i++;
        } else {
            array[k] = buffer[j];
            j++;
        }
        k++;
    }
    
    while (i <= middle) {
        array[k] = buffer[i];
        i++;
        k++;
    }
    while (j <= end) {
        array[k] = buffer[j];
        j++;
        k++;
    }
    delete[] buffer;
}

void mrgSort(int array[], int start, int end) {
    if (start >= end) {
        return;
    }
    int middle = int((start + end) / 2);
    mrgSort(array, start, middle);
    mrgSort(array, middle + 1, end);
    merge(array, start, middle, end);
}
void mergeSort(int array[], int n) {
    mrgSort(array, 0, n-1);
}
