#include <iostream>

// Function to print the elements of the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to insert an element at a specific position in the array
void insertElement(int arr[], int& size, int element, int position, int capacity) {
    if (size >= capacity) {
        std::cout << "Array is full. Cannot insert element." << std::endl;
        return;
    }
    if (position < 0 || position > size) {
        std::cout << "Invalid position. Cannot insert element." << std::endl;
        return;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
}

// Function to delete an element from a specific position in the array
void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        std::cout << "Invalid position. Cannot delete element." << std::endl;
        return;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main() {
    const int capacity = 10;
    int arr[capacity] = {1, 2, 3, 4, 5};
    int size = 5;

    std::cout << "Initial array: ";
    printArray(arr, size);

    // Inserting an element
    int element = 10;
    int position = 2;
    insertElement(arr, size, element, position, capacity);
    std::cout << "Array after insertion: ";
    printArray(arr, size);

    // Deleting an element
    position = 4;
    deleteElement(arr, size, position);
    std::cout << "Array after deletion: ";
    printArray(arr, size);

    return 0;
}
