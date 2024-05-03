# Dynamic Array Implementation in C++

This project consists of a simple C++ program that demonstrates the creation and use of a dynamic array. The user is prompted to define the size of the array and then to enter the specific number of elements. The program then displays the entered elements.

## Files

- `main.cpp`: Contains the code for creating the dynamic array and the main function to run the program.

## Code Explanation

Below is a line-by-line explanation of `main.cpp`:

### Including Libraries

```cpp
#include<iostream>
```

- This line includes the Standard C++ Library for input and output operations.

### Struct Definition

```cpp

struct Array{
    int lenght; //for the number of elements
    int size; //for the capacity of the array
    int *a; // pointer to int, used to store the address of the array dynamically allocated
};
```

+Defines a structure named Array that contains:
+lenght: An integer to store the number of elements in the array.
+size: An integer to store the capacity of the array.
+a: A pointer to an integer array. This will point to the dynamically allocated memory for storing the elements.

### Display Function

```cpp

void display(struct Array arr){
    cout << "The elements of the Array are: ";
    for (int i = 0; i < arr.lenght; i++)
    {
        cout << arr.a[i];
    }
    cout << endl;
}

```

+A function named display which takes a structure Array as an argument and prints its elements.
+Iterates over the array elements using a for loop and prints each element.

### Main Function

```cpp
int main(){
    struct Array arr;
    cout << "Enter the size of the array: ";
    cin >> arr.size;
    arr.lenght = 0;
    arr.a = new int[arr.size];

    cout << "Enter the number of elements of the Array: ";
    cin >> arr.lenght;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < arr.lenght; i++)
    {
        cin >> arr.a[i];
    }

    display(arr);
    return 0;
}

```

+Entry point for the program.
+Declares an instance of Array.
+Reads the size of the array from user input and initializes the array with dynamic memory allocation.
+Reads the actual number of elements and the values of those elements.
+Calls the display function to print the array.
Ends program execution with a return statement.
