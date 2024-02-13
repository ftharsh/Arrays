# Deletion from array through index
## logic
```cpp
function deletion(arr, size, index):
    if index < 0 OR index >= size:
        print "Invalid index"
        return
    
    // Shift elements to the left starting from the given index
    for i from index to size - 2:
        arr[i] = arr[i + 1] // Replace current element with next element
    
    size = size - 1 // Update the size of the array after deletion
    
    print "The final array after deletion: "
    // Print the final array after deletion
    for i from 0 to size - 1:
        print arr[i] // Print each element separated by space
```
#####
Input Validation: The function first checks if the given index is valid or not. It verifies whether the index is within the bounds of the array. If the index is less than 0 or greater than or equal to the size of the array, it prints "Invalid index" and returns from the function.

Shifting Elements: If the index is valid, the function proceeds to shift the elements of the array to the left, starting from the given index. It iterates over the array starting from the index index up to size - 2 (one position before the end of the array). Inside the loop, each element at index i is replaced with the value of the next element, effectively shifting the array one position to the left.

Updating Size: After shifting the elements, the function decrements the size variable by 1 to reflect that an element has been removed from the array.

Printing Final Array: Finally, the function prints the updated array after deletion. It iterates over the array from index 0 to size - 1, printing each element separated by a space. This displays the array with the removed element.
```bash
g++ insertion_array.cpp -o insertion_array
./insertion_array
```
