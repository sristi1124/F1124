#include <iostream>
using namespace std;

// Insert value at position pos (0-based index)
void insertElement(int arr[], int &n, int pos, int value) {
    // TODO: Implement
    if (pos < 0 || pos > n) {
        cout << "Invalid position for insertion." << endl;
        return;
    }
    for (int i = n; i > pos; --i) {
        arr[i] = arr[i - 1];
    }
     arr[pos] = value;
    n++;
}

// Delete element at position pos (0-based index)
void deleteElement(int arr[], int &n, int pos) {
    // TODO: Implement
     if (pos < 0 || pos >= n) {
        cout << "Invalid position for deletion." << endl;
        return;
     }
     for (int i = pos; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    n--;
}

// Search for key and return its index, else return -1
int searchElement(int arr[], int n, int key) {
    // TODO: Implement
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

// Print all elements in array
void traverseArray(int arr[], int n) {
    // TODO: Implement
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " "<<endl;
    }
    cout << endl;
}
