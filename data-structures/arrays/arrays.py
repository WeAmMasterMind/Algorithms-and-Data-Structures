# Function to print the elements of the array
def print_array(arr):
    for elem in arr:
        print(elem, end=' ')
    print()

# Function to insert an element at a specific position in the array
def insert_element(arr, element, position):
    if position < 0 or position > len(arr):
        print("Invalid position. Cannot insert element.")
        return arr
    return arr[:position] + [element] + arr[position:]

# Function to delete an element from a specific position in the array
def delete_element(arr, position):
    if position < 0 or position >= len(arr):
        print("Invalid position. Cannot delete element.")
        return arr
    return arr[:position] + arr[position+1:]

if __name__ == "__main__":
    # Initial array
    numbers = [1, 2, 3, 4, 5]
    
    print("Initial array:", end=' ')
    print_array(numbers)

    # Inserting an element
    element = 10
    position = 2
    numbers = insert_element(numbers, element, position)
    print("Array after insertion:", end=' ')
    print_array(numbers)

    # Deleting an element
    position = 4
    numbers = delete_element(numbers, position)
    print("Array after deletion:", end=' ')
    print_array(numbers)
