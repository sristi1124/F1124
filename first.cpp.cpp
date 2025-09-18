#include <iostream>
using namespace std;

int main() {
    int a1[100];
    int a2[100];
    int u[200];  // union can have up to n1+n2 elements
    int n1, n2;
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a1[i];
    for (int i = 0; i < n2; i++) cin >> a2[i];

    int k = 0;
    // Copy all a1 elements into union array
    for (int i = 0; i < n1; i++) {
        u[k++] = a1[i];
    }

    // Add elements from a2 if not already present
    for (int i = 0; i < n2; i++) {
        bool found = false;
        for (int j = 0; j < n1; j++) {
            if (a2[i] == a1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            u[k++] = a2[i];
        }
    }

    // Print union
    for (int i = 0; i < k; i++) {
        cout << u[i] << " ";
    }
    cout << endl;

    return 0;
}
