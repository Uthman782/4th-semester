#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) { // Runs at least once
        if (arr[i] == key) 
            return i; // Found at first index (best case)
    }
    return -1;
}

int main() {
    int arr[] = {3, 5, 7, 9, 11};
    int key = 3;
    int index = linearSearch(arr, 5, key);
    
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
