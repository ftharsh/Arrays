# Array Insertion Program

This repository contains a C++ program that demonstrates how to insert an element into an array at a specified position. The program shifts the elements to the right to accommodate the new element and then displays the updated array.

## Program Explanation

### Files

- `main.cpp`: Contains the implementation of the array insertion logic.

### Code Explanation

The code consists of two main parts: the `add` function and the `main` function.

#### `add` Function

```cpp
#include <iostream>
using namespace std;

int add(int index, int val, int length, int a[]) {
    for(int i = length; i > index; i--) {
        a[i] = a[i-1];
    }
    a[index] = val;
    length++;
    cout << "The new array is: " << endl;
    for(int i = 0; i < length; i++) {
        cout << " " << a[i];
    }
}
```

- Parameters:

- index: The position at which the new value should be inserted.
- val: The value to be inserted.
- length: The current length of the array.
- a[]: The array in which the value will be inserted.

* Functionality:

* The function shifts elements from the end of the array to the right, starting from the index position, to make space for the new value.
* It inserts the new value at the specified index.
* It increments the length of the array.
* It prints the updated array to the console.

```cpp
int main() {
    int arr[] = {2, 3, 6, 7, 5, 4, 1};
    int length = sizeof(arr) / sizeof(int);

    add(3, 11, length, arr);
    return 0;
}
```

- Functionality:
- Defines an array arr with initial values.
- Calculates the length of the array.
- Calls the add function to insert the value 11 at index 3.
- The updated array is printed within the add function.

## key concepts

### point 1

if n = 2 , m=3 ;
and n = m , then after this
n = 3 , m = 3

### point 2

- if for array traversal - print all elements
- use i < lenght
- if u use i <=lenght , then i will print one element defined in the array (mai b garbage value)

### point 3

- a[i++]
- Post-Increment Operator (i++):

- The expression i++ increments the variable i after the current value of i is used in the expression.
- Thus, a[i++] accesses the element at index i in the array a and then increments i by 1.
  Effect on i:

- The value of i is incremented after its current value is used.
- If i is initially 5, then a[i++] will access a[5] and afterward, i will be incremented to 6.
  a[i+1]
- Addition Operator (i+1):

- The expression i+1 adds 1 to the current value of i and uses this result as the index for the array a.
- Thus, a[i+1] accesses the element at index i+1 in the array a.
  Effect on i:

- The value of i is not modified by this expression.
- If i is initially 5, then a[i+1] will access a[6] and i will remain 5.
