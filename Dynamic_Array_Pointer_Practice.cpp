// Topics: Pointer, Dynamic Memory Allocation,
// Dynamic Array, new, delete[], Array Manipulation

#include <iostream>
using namespace std;

int main() {

    // Dynamically allocate an array
    int* arr = new int[10]{1, 2, 3, 4, 5, 6};

    int a = 2;

    // Shift elements to remove the element at index 2
    for (int i = a; i < 5; i++) {
        arr[i] = arr[i + 1];
    }

    // Display the array
    for (int i = 0; i <= 5; i++) {
        cout << arr[i] << endl;
    }

    // Release dynamically allocated memory
    delete[] arr;

    return 0;
}
