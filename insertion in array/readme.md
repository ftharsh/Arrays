# Array Insertion Logic

This document outlines the logic for inserting an element into an array at a specified index.

```cpp
void insert(int a[], int size , int n , int index){
    // Check if the index is valid
    if (index < 0 || index > size)
    {
        cout << "invalid index" << endl;
        return;
    }
    
    // Increase the size of the array
    size++;
    
    // Shift elements to the right from the index where the element needs to be inserted
    for (int i = size-1; i >= index; i--)
    {
       a[i] = a[i-1];
    }
    
    // Insert the new element at the specified index
    a[index] = n;
    
    // Display the updated array
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }    
}
```
```bash
g++ insertion_array.cpp -o insertion_array
./insertion_array
```
Sample Input:
3 2

Sample Output:
2 3 3 4 5 6 7 10

###This will insert the number 3 at index 2 in the array {2, 3, 4, 5, 6, 7, 10}.
